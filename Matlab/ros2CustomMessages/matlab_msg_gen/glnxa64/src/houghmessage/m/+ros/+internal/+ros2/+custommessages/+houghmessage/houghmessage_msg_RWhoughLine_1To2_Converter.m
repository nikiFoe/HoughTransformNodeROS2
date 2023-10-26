function ros2msg = houghmessage_msg_RWhoughLine_1To2_Converter(message,ros2msg)
%houghmessage_msg_RWhoughLine_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.thaxis = message.Thaxis;
ros2msg.raxis = message.Raxis;
ros2msg.row = message.Row;
ros2msg.col = message.Col;
end