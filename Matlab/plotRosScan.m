clear all
close all
setenv('ROS_DOMAIN_ID','1')
%setenv('AMENT_PREFIX_PATH','')
ros2('topic','list')
lidarNode = ros2node('/turtlebot3_laserscan');
%%rwth = ros2node('/rwth');
%%lidarNode = ros2node('/LD06');

%lidarSub = ros2message('sensor_msgs/LaserScan');

lidarSub = ros2subscriber(lidarNode,'/scan');
%%houghLines = ros2subscriber(rwth,'/something');

pause(3)

r = 1.0;
%r = ros2rate(lidarNode,1);
%reset(r);
for n=1:3000
    receive(lidarSub,5);
    %%receive(houghLines,5);
    oScan = lidarSub.LatestMessage;
    %%oHough = houghLines.LatestMessage;
    if n==1
        vAngles = [oScan.angle_min:oScan.angle_increment:oScan.angle_max];
    end
    
    vRanges = oScan.ranges';
    vX= cos(vAngles).*vRanges;
    vY = sin(vAngles).*vRanges;

    
    %%plot(vX,vY,'.');
    %%axis equal
    %%grid on;
    %%rTimeStamp = double(oScan.header.stamp.sec)+double(oScan.header.stamp.nanosec)*1E-9;
    %%title(sprintf('#%d laser Scan at time %.2f sec',n,rTimeStamp));
    %%drawnow

    rRstep = 0.05;
    nAngularSteps=50;
    usedAngles =vAngles(46:315);
    usedRanges = vRanges(46:315);
    [C vThAxis vRAxis]=RWhough2(usedAngles,usedRanges,nAngularSteps,rRstep);
    index=find(C==max(max(C)));    %% find the index of the highest peak
    row=mod(index,length(vRAxis));  %% Row coordiante of peek
    col=index/length(vRAxis);       %% Col coordinate of peek
    rho=(row-1)*rRstep;             %% Compute radius
    theta=(col-1)*2*pi/nAngularSteps; %% Compute Angle 
    
    
    figure(1);
    clf
    x=cos(vAngles).*vRanges;
    y=sin(vAngles).*vRanges;
    subplot(1,1,1);
    plot(x,y,'k.');
    hold on
    PlotHoughLine(rho,theta,'r-')
    grid on
    axis equal
    
    figure(2);
    surf(vThAxis*180/pi,vRAxis,C);     % Plot Hough Space
    xlabel('\theta (degrees)');
    ylabel('Range (m)');
    title('Hough Transform');
    drawnow
end
