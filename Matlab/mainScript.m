clear all
close all
setenv('ROS_DOMAIN_ID','1')
ros2('topic','list')
%%lidarNode = ros2node('/turtlebot3_laserscan');
rwth = ros2node('/rwth');

%%lidarNode = ros2node('/LD06');
%lidarSub = ros2message('sensor_msgs/LaserScan');

%%lidarSub = ros2subscriber(lidarNode,'/scan');
houghLines = ros2subscriber(rwth,'/something');

pause(3)

rRstep = 0.05;
nAngularSteps=100;
for n=1:1000
    %%Receive Data from Nodes
    %%receive(lidarSub,5);
    receive(houghLines,5);
    %%oScan = lidarSub.LatestMessage;
    oHough = houghLines.LatestMessage;

    theta = oHough.thaxis;
    rho = oHough.raxis
    
    vAngles = (oHough.vangles)'%% [oScan.angle_min:oScan.angle_increment:oScan.angle_max];
    vRanges = (oHough.vranges)' %oScan.ranges;
    %vRanges = vRanges;
    % Code to find the first peak, in first laser scan to get initial estimate
    %%
    %%vRanges=log_tim55(n,3:273)*0.00106;
    %%[C vThAxis vRAxis]=RWhough2(vAngles,vRanges,nAngularSteps,rRstep);
    %%index=find(C==max(max(C)));    %% find the index of the highest peak
    %%row=mod(index,length(vRAxis));  %% Row coordiante of peek
    %%col=index/length(vRAxis);       %% Col coordinate of peek
    %%rho=(row-1)*rRstep;             %% Compute radius
    %%theta=(col-1)*2*pi/nAngularSteps; %% Compute Angle 
    
    
    
    figure(1);
    clf
    x=cos(vAngles).*vRanges;
    y=sin(vAngles).*vRanges;

    plot(x,y,'k.');
    hold on
    PlotHoughLine(rho,theta,'r--')
    grid on
    axis equal
    drawnow
    hold off
end


%C(:,max(col-15,1):min(col+15,length(Th_axis)))=0; % Clear current peak   
%PlotHoughLine(R_axis(row), Th_axis(col),'--r');
 

