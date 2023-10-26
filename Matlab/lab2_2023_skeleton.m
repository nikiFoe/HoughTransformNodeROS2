clear all
close all

% 
% Telerobotics lab2, 2023
% Script programmed by Sven Rönnbäck 
% September 25, 2023
% 
% Script for plotting Lidar Data, and Hough Transform 
%

log_tim55=load('log_tim55_5.txt');		% load laser range readings

time_tim55= log_tim55(:,2);				% get time stamps for laser range readings
time_begin_tim55=min(time_tim55);
time_begin = time_begin_tim55;
rRstep = 0.05;
nAngularSteps=100;
for n=500:1:1000
    % Code to find the first peak, in first laser scan to get initial estimate
    vAngles=[-135:1:135]*pi/180;
    vRanges=log_tim55(n,3:273)*0.00106;
    [C vThAxis vRAxis]=RWhough2(vAngles,vRanges,nAngularSteps,rRstep);
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
    print('-dpng',sprintf('lab2_HoughTransform.png'));
end


%C(:,max(col-15,1):min(col+15,length(Th_axis)))=0; % Clear current peak   
%PlotHoughLine(R_axis(row), Th_axis(col),'--r');
 

