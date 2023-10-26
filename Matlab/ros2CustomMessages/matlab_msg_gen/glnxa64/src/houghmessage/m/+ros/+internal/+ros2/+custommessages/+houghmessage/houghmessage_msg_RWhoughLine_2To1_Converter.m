function ros1msg = houghmessage_msg_RWhoughLine_2To1_Converter(message,ros1msg)
%houghmessage_msg_RWhoughLine_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Thaxis = message.thaxis;
ros1msg.Raxis = message.raxis;
ros1msg.Row = message.row;
ros1msg.Col = message.col;
end