#ifndef mm_autograde_M2_nice_types_h_
#define mm_autograde_M2_nice_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_NextState_
#define DEFINED_TYPEDEF_FOR_NextState_
typedef enum { NextState_NONE = 0 , NextState_SCAN_ENV , NextState_DECIDE ,
NextState_TURN_LEFT , NextState_MOVE_FORWARD , NextState_TURN_RIGHT ,
NextState_TURN_BACK , NextState_UPDATE_POSITION , NextState_CHECK_DONE ,
NextState_END } NextState ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_ssbus_
#define DEFINED_TYPEDEF_FOR_ssbus_
typedef struct { real_T m ; real_T I ; real_T L ; real_T d ; real_T R ;
real_T m_c ; real_T I_w ; real_T La ; real_T Ra ; real_T Kb ; real_T N ;
real_T Kt ; uint8_T robot_img [ 121203 ] ; uint8_T robot_imgalpha [ 40401 ] ;
uint8_T sl_padding0 [ 4 ] ; real_T robot_imgxyd [ 201 ] ; real_T robot_rad ;
real_T Rimu [ 9 ] ; real_T timu [ 3 ] ; real_T toflpose [ 3 ] ; real_T
toffpose [ 3 ] ; real_T tofrpose [ 3 ] ; real_T tofposes [ 9 ] ; real_T
tofspts [ 1491 ] ; uint8_T mapim [ 240400 ] ; uint8_T mapimfud [ 240400 ] ;
real_T mapres ; real32_T mapdt [ 240400 ] ; real_T wencr ; } ssbus ;
#endif
#ifndef struct_tag_SLyPVOxmSxU6ohhzgEeWtH
#define struct_tag_SLyPVOxmSxU6ohhzgEeWtH
struct tag_SLyPVOxmSxU6ohhzgEeWtH { real_T f1 [ 2 ] ; } ;
#endif
#ifndef typedef_nkmamamk5r
#define typedef_nkmamamk5r
typedef struct tag_SLyPVOxmSxU6ohhzgEeWtH nkmamamk5r ;
#endif
#ifndef struct_tag_belDyztK4QiH6lXsypfI0C
#define struct_tag_belDyztK4QiH6lXsypfI0C
struct tag_belDyztK4QiH6lXsypfI0C { real_T f1 [ 2982 ] ; } ;
#endif
#ifndef typedef_lwxzcf1fiz
#define typedef_lwxzcf1fiz
typedef struct tag_belDyztK4QiH6lXsypfI0C lwxzcf1fiz ;
#endif
#ifndef struct_tag_XAN0yEPIVmgGTBGGitkNoG
#define struct_tag_XAN0yEPIVmgGTBGGitkNoG
struct tag_XAN0yEPIVmgGTBGGitkNoG { real_T XWorldLimits [ 2 ] ; real_T
YWorldLimits [ 2 ] ; real_T ImageSizeAlias [ 2 ] ; boolean_T
ForcePixelExtentToOne ; } ;
#endif
#ifndef typedef_mgepjkjzts
#define typedef_mgepjkjzts
typedef struct tag_XAN0yEPIVmgGTBGGitkNoG mgepjkjzts ;
#endif
#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T
struct emxArray_uint8_T { uint8_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_lqgezxb0qr
#define typedef_lqgezxb0qr
typedef struct emxArray_uint8_T lqgezxb0qr ;
#endif
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T { real_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_hgwcbtnozn
#define typedef_hgwcbtnozn
typedef struct emxArray_real_T hgwcbtnozn ;
#endif
#ifndef struct_emxArray_uint8_T_201x201
#define struct_emxArray_uint8_T_201x201
struct emxArray_uint8_T_201x201 { uint8_T data [ 40401 ] ; int32_T size [ 2 ]
; } ;
#endif
#ifndef typedef_eronn5mgwb
#define typedef_eronn5mgwb
typedef struct emxArray_uint8_T_201x201 eronn5mgwb ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 22
#endif
#ifndef SS_INT64
#define SS_INT64 23
#endif
typedef struct P_ P ;
#endif
