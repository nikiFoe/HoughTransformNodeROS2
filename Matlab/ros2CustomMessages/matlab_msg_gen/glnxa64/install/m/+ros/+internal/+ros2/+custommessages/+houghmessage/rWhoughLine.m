function [data, info] = rWhoughLine
%RWhoughLine gives an empty data for houghmessage/RWhoughLine
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'houghmessage/RWhoughLine';
[data.cmatrix, info.cmatrix] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.thaxis, info.thaxis] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.raxis, info.raxis] = ros.internal.ros2.messages.ros2.default_type('single',1,0);
[data.vranges, info.vranges] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.vangles, info.vangles] = ros.internal.ros2.messages.ros2.default_type('single',NaN,0);
[data.row, info.row] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.col, info.col] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'houghmessage/RWhoughLine';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'cmatrix';
info.MatPath{2} = 'thaxis';
info.MatPath{3} = 'raxis';
info.MatPath{4} = 'vranges';
info.MatPath{5} = 'vangles';
info.MatPath{6} = 'row';
info.MatPath{7} = 'col';
