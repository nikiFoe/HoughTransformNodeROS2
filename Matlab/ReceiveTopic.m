setenv('ROS_DOMAIN_ID','1');
turtleNode = ros2node('/turtlebot3_laserscan');
pause(1);
sub = ros2subscriber(turtleNode, "/scan");

pause(1);

angles = -180:1:179;
%%angles = angles*(-1);
for i = 1:100000
    msg = receive(sub,10);
    if n==1
        angles = [msg.angle_min:msg.angle_increment:msg.angle_max];
    end
    x = sind(angles).*msg.ranges.';
    y = cosd(angles).*msg.ranges.';
    plot(x,y)
end