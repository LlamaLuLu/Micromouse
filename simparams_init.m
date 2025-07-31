simparams = struct();

simparams.R = 0.031;  % wheel radius (m)
simparams.L = 0.136/2;  % Axle half-length (m)
simparams.d = 5;  % Distance from axle to robot centre of mass (mm)

% Load robot image for display
robot_totalwidth = 0.1;  % outside wheel to outside wheel (m)
[robot_img, ~, robot_imgalpha] = imread('uctmm_image.png');
simparams.robot_img = robot_img;
simparams.robot_imgalpha = robot_imgalpha;
robot_imgres = size(robot_imgs,1)/robot_totalwidth;  % pixels per meter
simparams.robot_imgxyd = ((1:size(robot_img,1)) - ceil(size(robot_img,1)/2))/robot_imgres;

% robotParams.ticksPerRot = 20;                    % Ticks per rotation for encoders
% robotParams.width = 85;                          % Distance from left to right of robot (mm)
% robotParams.length = 123;                        % Distance from back to front of robot (mm)
% robotParams.axle_to_front = 56;                  % Distance from axle to front of robot (mm)
% robotParams.axle_to_centre = 5;                  % Distance from axle to centre of robot (mm)
% load wheelLUT;        

% TOF sensors in robot frame
tofl = struct();
tofl.xr = 20;  tofl.yr = 20;  tofl.thetar = 90;
toff = struct();
toff.xr = 40;  toff.yr = 0;  toff.thetar = 0;
tofr = struct();
tofr.xr = 20;  tofr.yr = -20;  tofr.thetar = -90;
simparams.tofl = tofl;
simparams.toff = toff;
simparams.tofr = tofr;
simparams.dsensmaxrange = 6;

% mapparams = struct();
map = amaze_mm(10,16,'middle',false,false);
simparams.mapim = occupancyMatrix(map);
simparams.mapres = map.Resolution;

mapForSim = struct();
mapForSim.lineFollowingMap = [];
mapForSim.obsMap = occupancyMatrix(map);
mapForSim.scaleFactor = map.Resolution;
mapForSim.simMap = map;