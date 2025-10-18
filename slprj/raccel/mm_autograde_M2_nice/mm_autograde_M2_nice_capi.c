#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "mm_autograde_M2_nice_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 22
#endif
#ifndef SS_INT64
#define SS_INT64 23
#endif
#else
#include "builtin_typeid_types.h"
#include "mm_autograde_M2_nice.h"
#include "mm_autograde_M2_nice_capi.h"
#include "mm_autograde_M2_nice_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING ( "mm_autograde_M2_nice/If Action Subsystem" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 3 , 1 , TARGET_STRING ( "mm_autograde_M2_nice/If Action Subsystem/In1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Chart/is_active_c3_mm_autograde_M2_nice" ) , TARGET_STRING ( "is_active_c3_mm_autograde_M2_nice" ) , 0 , 1 , 0 , 0 , 0 } , { 5 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Chart/is_c3_mm_autograde_M2_nice" ) , TARGET_STRING ( "is_c3_mm_autograde_M2_nice" ) , 0 , 2 , 0 , 0 , 0 } , { 6 , 5 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/MAZE_RUNNER" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 5 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/MAZE_RUNNER" ) , TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 8 , 5 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/MAZE_RUNNER" ) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 , 0 } , { 9 , 5 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/MAZE_RUNNER" ) , TARGET_STRING ( "" ) , 3 , 0 , 0 , 0 , 0 } , { 10 , 5 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/MAZE_RUNNER" ) , TARGET_STRING ( "" ) , 4 , 0 , 0 , 0 , 0 } , { 11 , 5 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/MAZE_RUNNER" ) , TARGET_STRING ( "" ) , 5 , 0 , 0 , 0 , 0 } , { 12 , 5 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/MAZE_RUNNER" ) , TARGET_STRING ( "" ) , 7 , 3 , 0 , 0 , 0 } , { 13 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/MAZE_RUNNER/is_active_c4_mm_autograde_M2_nice" ) , TARGET_STRING ( "is_active_c4_mm_autograde_M2_nice" ) , 0 , 1 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/MAZE_RUNNER/is_c4_mm_autograde_M2_nice" ) , TARGET_STRING ( "is_c4_mm_autograde_M2_nice" ) , 0 , 2 , 0 , 0 , 0 } , { 15 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Gain4" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 16 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/distance converter" ) , TARGET_STRING ( "distance_travelled" ) , 0 , 0 , 0 , 0 , 2 } , { 17 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Integrator1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 18 , 10 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm collision detection" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 19 , 11 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm distance sensors" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 20 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/Reshape2" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 21 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/Reshape3" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 22 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/K" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 23 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/1//T" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/K" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 25 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/1//T" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 26 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/K" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 27 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/1//T" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 28 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm basic IMU/Derivative" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 29 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm basic IMU/Derivative2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 30 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm basic IMU/Derivative4" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 31 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm basic IMU/Reshape1" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 32 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm basic IMU/Reshape2" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 33 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm robot pose/Integrator" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 34 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm robot pose/Integrator1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 35 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm robot pose/Integrator2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 36 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm robot pose/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 37 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm robot pose/Product1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 38 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm wheel kinematics inv/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 39 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm wheel kinematics inv/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 40 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Enable//disable time constant/Avoid Divide by Zero" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Enable//disable time constant/Logical Operator" ) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 0 } , { 42 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Enable//disable time constant/Probe" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 43 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Enable//disable time constant/Avoid Divide by Zero" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 44 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Enable//disable time constant/Logical Operator" ) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Enable//disable time constant/Probe" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 46 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Enable//disable time constant/Avoid Divide by Zero" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 47 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Enable//disable time constant/Logical Operator" ) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 0 } , { 48 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Enable//disable time constant/Probe" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 49 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Enable//disable time constant/Compare To Constant/Compare" ) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 50 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Integrator (Discrete or Continuous)/Discrete/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Enable//disable time constant/Compare To Constant/Compare" ) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 52 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Integrator (Discrete or Continuous)/Discrete/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 53 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Enable//disable time constant/Compare To Constant/Compare" ) , TARGET_STRING ( "" ) , 0 , 3 , 0 , 0 , 3 } , { 54 , 0 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Integrator (Discrete or Continuous)/Discrete/Saturation" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 55 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot" ) , TARGET_STRING ( "x0" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot" ) , TARGET_STRING ( "y0" ) , 0 , 0 , 0 } , { 57 , TARGET_STRING ( "mm_autograde_M2_nice/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING ( "mm_autograde_M2_nice/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING ( "mm_autograde_M2_nice/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING ( "mm_autograde_M2_nice/If Action Subsystem/Out1" ) , TARGET_STRING ( "InitialOutput" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3" ) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3" ) , TARGET_STRING ( "T" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3" ) , TARGET_STRING ( "init_option" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4" ) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 65 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4" ) , TARGET_STRING ( "T" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4" ) , TARGET_STRING ( "init_option" ) , 0 , 0 , 0 } , { 67 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5" ) , TARGET_STRING ( "K" ) , 0 , 0 , 0 } , { 68 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5" ) , TARGET_STRING ( "T" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5" ) , TARGET_STRING ( "init_option" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Gain4" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 71 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/distance converter" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 72 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/error margin" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 73 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Integrator1" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 75 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/OLED_STRING1" ) , TARGET_STRING ( "String" ) , 4 , 0 , 0 } , { 76 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/OLED_STRING2" ) , TARGET_STRING ( "String" ) , 4 , 0 , 0 } , { 77 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm robot pose" ) , TARGET_STRING ( "theta0" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm wheel encoders" ) , TARGET_STRING ( "ticsperrev" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm distance sensors" ) , TARGET_STRING ( "debug" ) , 0 , 0 , 0 } , { 80 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm basic IMU/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm basic IMU/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 4 , 0 } , { 82 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm wheel encoders/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm wheel encoders/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm wheel encoders/Constant2" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm wheel encoders/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING ( "mm_autograde_M2_nice/mm simple robot/mm wheel encoders/Integrator1" ) , TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Enable//disable time constant/Compare To Constant" ) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Enable//disable time constant/Compare To Constant" ) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Enable//disable time constant/Compare To Constant" ) , TARGET_STRING ( "const" ) , 0 , 0 , 0 } , { 90 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Enable//disable time constant/Compare To Zero/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 91 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Integrator (Discrete or Continuous)/Discrete/Integrator" ) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Integrator (Discrete or Continuous)/Discrete/Integrator" ) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Integrator (Discrete or Continuous)/Discrete/Integrator" ) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Integrator (Discrete or Continuous)/Discrete/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)3/Integrator (Discrete or Continuous)/Discrete/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Enable//disable time constant/Compare To Zero/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Integrator (Discrete or Continuous)/Discrete/Integrator" ) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Integrator (Discrete or Continuous)/Discrete/Integrator" ) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Integrator (Discrete or Continuous)/Discrete/Integrator" ) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Integrator (Discrete or Continuous)/Discrete/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 101 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)4/Integrator (Discrete or Continuous)/Discrete/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 102 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Enable//disable time constant/Compare To Zero/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 103 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Integrator (Discrete or Continuous)/Discrete/Integrator" ) , TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 104 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Integrator (Discrete or Continuous)/Discrete/Integrator" ) , TARGET_STRING ( "UpperSaturationLimit" ) , 0 , 0 , 0 } , { 105 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Integrator (Discrete or Continuous)/Discrete/Integrator" ) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 0 , 0 } , { 106 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Integrator (Discrete or Continuous)/Discrete/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 107 , TARGET_STRING ( "mm_autograde_M2_nice/Subsystem Reference1/Low-Pass Filter (Discrete or Continuous)5/Integrator (Discrete or Continuous)/Discrete/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 108 , TARGET_STRING ( "simstruct" ) , 6 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . kzc2g5pqze , & rtB . ggd3q5xetv ,
& rtB . b0avxogppv , & rtB . kzc2g5pqze , & rtDW . bymhg25233 , & rtDW .
chcmzyq1nu , & rtB . iaho3wpxg5 , & rtB . fspxye1ya1 , & rtB . kbi5gtax1r , &
rtB . nwh2ohbvkv , & rtB . dp50dq5tps , & rtB . hy1sdasjsw , & rtB .
n504o31mpd , & rtDW . azfivy5wqv , & rtDW . lhfc0ta5ml , & rtB . c3f5my0yba [
0 ] , & rtB . gtf5bhspr5 , & rtB . jnbt4dp1zd , & rtB . ohbrmglluj , & rtB .
mpugsvqgyh [ 0 ] , & rtB . kwftyjyxpv [ 0 ] , & rtB . pvl2fqbdnb [ 0 ] , &
rtB . ewf4owjito , & rtB . avr1raogew , & rtB . ivhyg3ka2t , & rtB .
jph2p0erwe , & rtB . geack2hgej , & rtB . mmvr34tq4s , & rtB . i1ks4nvn04 , &
rtB . kxrvfu1ehv , & rtB . lsr13h5kid , & rtB . ehm3yytxoa [ 0 ] , & rtB .
k04rua40z0 [ 0 ] , & rtB . cngfn1wxw4 , & rtB . gvkjqyfh5c , & rtB .
h4kspc310t , & rtB . aq0w45afqv , & rtB . ks2rov0eom , & rtB . nbug4ir3tw , &
rtB . o3awe1dagi , & rtB . nwdsz2ijro , & rtB . dv5fmxftb2 , & rtB .
bm3zqotgwb [ 0 ] , & rtB . mja435uye4 , & rtB . hez31ivcnc , & rtB .
gc0h2fcjlf [ 0 ] , & rtB . o1u44cgbcz , & rtB . pbnizhjvzo , & rtB .
d5bexgg5ud [ 0 ] , & rtB . cngravbh2r , & rtB . euqty000s5 , & rtB .
caujwou1jk , & rtB . o4oyjbghkn , & rtB . ntxg1addth , & rtB . aw5fvfkl4k , &
rtP . mmsimplerobot_x0 , & rtP . mmsimplerobot_y0 , & rtP .
Constant_Value_e2dunptcm0 , & rtP . Gain_Gain , & rtP . Gain1_Gain , & rtP .
Out1_Y0 , & rtP . LowPassFilterDiscreteorContinuous3_K , & rtP .
LowPassFilterDiscreteorContinuous3_T , & rtP .
LowPassFilterDiscreteorContinuous3_init_option , & rtP .
LowPassFilterDiscreteorContinuous4_K , & rtP .
LowPassFilterDiscreteorContinuous4_T , & rtP .
LowPassFilterDiscreteorContinuous4_init_option , & rtP .
LowPassFilterDiscreteorContinuous5_K , & rtP .
LowPassFilterDiscreteorContinuous5_T , & rtP .
LowPassFilterDiscreteorContinuous5_init_option , & rtP . Gain4_Gain , & rtP .
distanceconverter_Gain , & rtP . errormargin_Gain , & rtP .
Integrator_IC_ngb3lucrsz , & rtP . Integrator1_IC , & rtP .
OLED_STRING1_String , & rtP . OLED_STRING2_String , & rtP .
mmrobotpose_theta0 , & rtP . mmwheelencoders_ticsperrev , & rtP .
mmdistancesensors_debug , & rtP . Constant_Value_e5jcotvvny , & rtP .
Constant1_Value [ 0 ] , & rtP . Constant_Value_lr4ms5o4l0 , & rtP .
Constant1_Value_ddcl5gh2ak , & rtP . Constant2_Value , & rtP . Integrator_IC
, & rtP . Integrator1_IC_kg1uujsnot , & rtP . CompareToConstant_const , & rtP
. CompareToConstant_const_izdv1scwad , & rtP .
CompareToConstant_const_a4stry1zs4 , & rtP . Constant_Value , & rtP .
Integrator_gainval , & rtP . Integrator_UpperSat , & rtP .
Integrator_LowerSat , & rtP . Saturation_UpperSat , & rtP .
Saturation_LowerSat , & rtP . Constant_Value_ofajz0vmqk , & rtP .
Integrator_gainval_pmkfkwu0cc , & rtP . Integrator_UpperSat_kzv3sf2wkn , &
rtP . Integrator_LowerSat_et0vhzjblr , & rtP . Saturation_UpperSat_lqq4s3fwjp
, & rtP . Saturation_LowerSat_az2le0w5qs , & rtP . Constant_Value_iweutw4dc2
, & rtP . Integrator_gainval_oyqv0ladld , & rtP .
Integrator_UpperSat_fgmadlykzp , & rtP . Integrator_LowerSat_kbaak3f5xe , &
rtP . Saturation_UpperSat_my3br2vs03 , & rtP . Saturation_LowerSat_awul2wab42
, & rtP . simstruct , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL )
} ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof ( uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } , { "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T ) SS_BOOLEAN , 0 , 0 , 0 } , { "numeric" , "pointer_T" , 0 , 0 , sizeof ( pointer_T ) , ( uint8_T ) SS_POINTER , 0 , 0 , 0 } , { "float" , "real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0 } , { "struct" , "ssbus" , 28 , 1 , sizeof ( ssbus ) , ( uint8_T ) SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "m" , rt_offsetof ( ssbus , m ) , 0 , 5 , 0 } , { "I" ,
rt_offsetof ( ssbus , I ) , 0 , 5 , 0 } , { "L" , rt_offsetof ( ssbus , L ) ,
0 , 5 , 0 } , { "d" , rt_offsetof ( ssbus , d ) , 0 , 5 , 0 } , { "R" ,
rt_offsetof ( ssbus , R ) , 0 , 5 , 0 } , { "m_c" , rt_offsetof ( ssbus , m_c
) , 0 , 5 , 0 } , { "I_w" , rt_offsetof ( ssbus , I_w ) , 0 , 5 , 0 } , {
"La" , rt_offsetof ( ssbus , La ) , 0 , 5 , 0 } , { "Ra" , rt_offsetof ( ssbus
, Ra ) , 0 , 5 , 0 } , { "Kb" , rt_offsetof ( ssbus , Kb ) , 0 , 5 , 0 } , {
"N" , rt_offsetof ( ssbus , N ) , 0 , 5 , 0 } , { "Kt" , rt_offsetof ( ssbus
, Kt ) , 0 , 5 , 0 } , { "robot_img" , rt_offsetof ( ssbus , robot_img ) , 1
, 6 , 0 } , { "robot_imgalpha" , rt_offsetof ( ssbus , robot_imgalpha ) , 1 ,
7 , 0 } , { "robot_imgxyd" , rt_offsetof ( ssbus , robot_imgxyd ) , 0 , 8 , 0
} , { "robot_rad" , rt_offsetof ( ssbus , robot_rad ) , 0 , 5 , 0 } , {
"Rimu" , rt_offsetof ( ssbus , Rimu ) , 0 , 9 , 0 } , { "timu" , rt_offsetof
( ssbus , timu ) , 0 , 10 , 0 } , { "toflpose" , rt_offsetof ( ssbus ,
toflpose ) , 0 , 2 , 0 } , { "toffpose" , rt_offsetof ( ssbus , toffpose ) ,
0 , 2 , 0 } , { "tofrpose" , rt_offsetof ( ssbus , tofrpose ) , 0 , 2 , 0 } ,
{ "tofposes" , rt_offsetof ( ssbus , tofposes ) , 0 , 9 , 0 } , { "tofspts" ,
rt_offsetof ( ssbus , tofspts ) , 0 , 11 , 0 } , { "mapim" , rt_offsetof ( ssbus
, mapim ) , 1 , 12 , 0 } , { "mapimfud" , rt_offsetof ( ssbus , mapimfud ) ,
1 , 12 , 0 } , { "mapres" , rt_offsetof ( ssbus , mapres ) , 0 , 5 , 0 } , {
"mapdt" , rt_offsetof ( ssbus , mapdt ) , 5 , 12 , 0 } , { "wencr" ,
rt_offsetof ( ssbus , wencr ) , 0 , 5 , 0 } } ; static const
rtwCAPI_DimensionMap rtDimensionMap [ ] = { { rtwCAPI_SCALAR , 0 , 2 , 0 } ,
{ rtwCAPI_VECTOR , 2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , {
rtwCAPI_VECTOR , 6 , 2 , 0 } , { rtwCAPI_VECTOR , 4 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR_ND , 8 ,
3 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 11 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 13 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 15 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR
, 17 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 19 , 2 , 0 } } ; static const
uint_T rtDimensionArray [ ] = { 1 , 1 , 2 , 1 , 1 , 3 , 3 , 1 , 201 , 201 , 3
, 201 , 201 , 1 , 201 , 3 , 3 , 1 , 1491 , 400 , 601 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.005 , 0.0 , 0.01 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , ( int8_T ) 2 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 3 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 55 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 53 , rtModelParameters , 1 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 1900629582U , 3714603425U , 3539306551U , 3798494281U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * mm_autograde_M2_nice_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void mm_autograde_M2_nice_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion
( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void mm_autograde_M2_nice_host_InitializeDataMapInfo ( mm_autograde_M2_nice_host_DataMapInfo_T * dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
