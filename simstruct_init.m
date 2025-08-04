function simstruct = simstruct_init()
%SIMSTRUCT_INIT  Initialise micro-mouse simulation structure
%   simstruct = simstruct_init() creates a simulation structure for use in
%   various micro-mouse Simulink blocks.  If simstruct_init() is called
%   without a return argument then it writes the simulation structure
%   simstruct into the base workspace.  
%
%   In order for a Simulink Matlab function block to access this structure
%   its initFcn callback (under Properties) must call struct2bus to convert
%   this structure into a Simulink bus that can be indexed.  For now
%   struct2bus is simple and only wants numeric data types, so make sure
%   that the fields of simstruct are sufficiently simple that the
%   conversion succeeds (e.g. no structures in simstruct fields). 

simstruct = struct();

simstruct.R = 0.031;  % wheel radius (m)
simstruct.L = 0.085/2;  % Axle half-length (m)
simstruct.d = 0.005;  % Distance from axle to robot centre of mass (m)

% Load robot image for display
robot_totalwidth = 0.085;  % outside wheel to outside wheel (m)
[robot_img,~,robot_imgalpha] = imread('uctmm_image.png');
simstruct.robot_img = robot_img;
simstruct.robot_imgalpha = robot_imgalpha;
robot_imgres = 147/robot_totalwidth;  % pixels per meter
simstruct.robot_imgxyd = ((1:size(robot_img,1)) - ceil(size(robot_img,1)/2))/robot_imgres;
robot_radp = 70;  % approximate mouse radius in pixels
simstruct.robot_rad = 70/robot_imgres;  % approximate mouse radius in meters for collision detection

% robotParams.ticksPerRot = 20;                    % Ticks per rotation for encoders
% robotParams.width = 85;                          % Distance from left to right of robot (mm)
% robotParams.length = 123;                        % Distance from back to front of robot (mm)
% robotParams.axle_to_front = 56;                  % Distance from axle to front of robot (mm)
% robotParams.axle_to_centre = 5;                  % Distance from axle to centre of robot (mm)
% load wheelLUT;        

% TOF sensors
simstruct.toflpose = [20 20 90];  % [x y theta] in robot frame
simstruct.toffpose = [20 20 90];
simstruct.tofrpose = [20 20 90];
simstruct.tofrange = [0.01 0.5];  % [min max]

% mapparams = struct();
map = amaze_mm(10,16,'middle',false,false);
simstruct.mapim = uint8(occupancyMatrix(map));
simstruct.mapres = map.Resolution;  % pixels per meter
mapdtp = bwdist(simstruct.mapim>0);  % distance transform in pixels
simstruct.mapdt = flipud(mapdtp/map.Resolution);  % distance transform in meters

% Needed for MRTL blocks?
mapForSim = struct();
mapForSim.lineFollowingMap = [];
mapForSim.obsMap = occupancyMatrix(map);
mapForSim.scaleFactor = map.Resolution;
mapForSim.simMap = map;
assignin('base','mapForSim',mapForSim);

if nargout==0
  assignin('base','simstruct',simstruct);
end