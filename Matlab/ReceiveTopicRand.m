%%twist = ros2message("turtlesim/Pose")
setenv('ROS_DOMAIN_ID','1');
turtleNode = ros2node('/rwth');
pause(1);
sub = ros2subscriber(turtleNode, "/something");

pause(1);

angles = -180:1:179;
%%angles = angles*(-1);
for i = 1:100000
    msg = receive(sub,10);
end
