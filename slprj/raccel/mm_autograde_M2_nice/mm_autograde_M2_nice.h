#ifndef mm_autograde_M2_nice_h_
#define mm_autograde_M2_nice_h_
#ifndef mm_autograde_M2_nice_COMMON_INCLUDES_
#define mm_autograde_M2_nice_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "blas.h"
#include "libmwimterp2d.h"
#endif
#include "mm_autograde_M2_nice_types.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include <string.h>
#define MODEL_NAME mm_autograde_M2_nice
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (66) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (7)   
#elif NCSTATES != 7
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { uint8_T inputImagePadded [ 128547 ] ; uint8_T b_B [ 121203 ]
; lwxzcf1fiz xwc [ 3 ] ; real_T xwa [ 8946 ] ; uint8_T
inputImagePadded_mbvzarwird [ 42849 ] ; eronn5mgwb simstruct ; real_T xwh [
4473 ] ; real_T mpv [ 4473 ] ; real_T b_b [ 2982 ] ; real_T mpvm [ 1491 ] ;
int16_T tmp_data [ 4473 ] ; int16_T tmp_data_cl54gopm0x [ 4473 ] ; boolean_T
ii [ 4473 ] ; uint8_T mpvm_kkiq3xxxve [ 4473 ] ; real_T cngfn1wxw4 ; real_T
h4kspc310t ; real_T i1ks4nvn04 ; real_T gvkjqyfh5c ; real_T kxrvfu1ehv ;
real_T lsr13h5kid ; real_T k04rua40z0 [ 3 ] ; real_T ehm3yytxoa [ 3 ] ;
real_T bm3zqotgwb [ 2 ] ; real_T kwftyjyxpv [ 3 ] ; real_T ewf4owjito ;
real_T euqty000s5 ; real_T gc0h2fcjlf [ 2 ] ; real_T ivhyg3ka2t ; real_T
o4oyjbghkn ; real_T d5bexgg5ud [ 2 ] ; real_T geack2hgej ; real_T aw5fvfkl4k
; real_T jnbt4dp1zd ; real_T pvl2fqbdnb [ 2 ] ; real_T c3f5my0yba [ 2 ] ;
real_T gtf5bhspr5 ; real_T ggd3q5xetv ; real_T b0avxogppv ; real_T nwdsz2ijro
; real_T avr1raogew ; real_T mja435uye4 ; real_T jph2p0erwe ; real_T
o1u44cgbcz ; real_T mmvr34tq4s ; real_T o3awe1dagi ; real_T aq0w45afqv ;
real_T ks2rov0eom ; real_T nbug4ir3tw ; real_T mpugsvqgyh [ 3 ] ; real_T
ohbrmglluj ; real_T iaho3wpxg5 ; real_T fspxye1ya1 ; real_T kbi5gtax1r ;
real_T nwh2ohbvkv ; real_T dp50dq5tps ; real_T hy1sdasjsw ; real_T kzc2g5pqze
; boolean_T dv5fmxftb2 ; boolean_T hez31ivcnc ; boolean_T pbnizhjvzo ;
boolean_T cngravbh2r ; boolean_T caujwou1jk ; boolean_T ntxg1addth ;
boolean_T n504o31mpd ; } B ; typedef struct { real_T e2tyz0qrrq ; real_T
dupakdsnzz ; real_T a5hvpj25th ; real_T i5bvacsh1c ; real_T j0pj1cxjdn ;
real_T hj4s3vhbsm ; real_T n3g3ymlzmr ; real_T gqfi4xcbpq ; real_T nltseoa5tf
; real_T jf4thnpuad ; real_T mjsm4xz2fd ; real_T msu0usinuw ; real_T
eb5ua2po2y ; real_T a4phy4pqvq ; real_T ht4sfrmguj ; real_T fvuqlob3jg ;
real_T ghpi3etgoe ; real_T b5ciq54a2a ; real_T as3jc4aixp ; real_T kw4mcnvapg
; real_T hekbx12zjf ; real_T dg4bndzwcf ; real_T bsz2i3x1zz ; real_T
guxmnl3023 ; real_T mkaulxhvv5 ; real_T k4bunfh2cu ; real_T omd2l4th2w ;
real_T ibjaxusqtb ; real_T bhzxd4c0jb ; real_T gcoa440zpp ; real_T fiug4ptcox
; real_T ei11pgnka4 ; real_T hryhffuttt ; real_T pkjabwswri ; real_T
hvlgcytolm ; real_T ahadgjvl0w ; real_T hthc5b4czm ; real_T lsryszinou ;
real_T jbbzdspg0o [ 24 ] ; real_T j3fo2xlqpp ; real_T oa1ipehqlk ; real_T
nk0ebvht3j ; real_T oavskvfao1 ; real_T m5xqkkdrpe [ 7 ] ; real_T dlac4no1kf
[ 7 ] ; real_T kmgfkm3qi1 ; real_T of44i41wjh ; real_T anrkqgyd0y ; real_T
c0ddl114m0 ; real_T bpv12jq0j2 ; real_T jcrrh2phtm ; struct { void *
LoggedData [ 3 ] ; } dcnvswfsji ; struct { void * LoggedData [ 2 ] ; }
oafdbnskgh ; struct { void * AQHandles ; } ptoetb01hb ; struct { void *
AQHandles ; } fcrqtiosyn ; struct { void * AQHandles ; } brzhetjznx ; struct
{ void * LoggedData ; } jd5lbr5wcq ; struct { void * AQHandles ; } bxw3wejwzq
; struct { void * LoggedData [ 5 ] ; } prd3yljh4y ; int32_T kjbt4d23ke ;
int32_T jbz5db4uv3 ; int32_T p1x2oxibuy ; int32_T boqo1kfngr ; int32_T
nmo21jm233 ; int32_T ppafdi3a1m ; int32_T ag2o5lx0zx ; int32_T pinldolpql ;
int32_T hivxqwy2wg ; int32_T p1z00yunkl ; int32_T nls3sblsfo ; uint32_T
lhfc0ta5ml ; uint32_T chcmzyq1nu ; NextState k5vzkvexn5 ; int8_T hgyf2n5vgw ;
int8_T n0ab4hkwjr ; int8_T p34vnxg4cl ; int8_T cshvnu2qj4 ; int8_T anun1akbzt
; uint8_T k00pa3laqh ; uint8_T omatkykwmc ; uint8_T h2aulvebrm ; uint8_T
azfivy5wqv ; uint8_T cxaqlklp3z ; uint8_T bymhg25233 ; boolean_T bt4dt4cuu2 ;
boolean_T hssax2olko ; boolean_T cfai5v52fq ; boolean_T n3w0gkdjc5 ;
boolean_T kpwsg1fwo4 ; boolean_T htlid55lmh ; boolean_T hrnpqly234 ;
boolean_T fffjpdz1bc ; boolean_T ctlazpcn1r ; boolean_T gpt4l3gxl0 ;
boolean_T bwmvjcjrxc ; boolean_T ftjkxzybsy ; boolean_T hrd2dtqf1n ;
boolean_T dkcwlolqxl ; boolean_T egry1geo3t ; boolean_T gz5an5grm2 ;
boolean_T keotauvojf ; boolean_T glguabnpzh ; boolean_T km1goje2r1 ;
boolean_T mnez3r4wih ; boolean_T cpqsdojs4v ; boolean_T g3h3iifz4a ;
boolean_T auf11wecna ; boolean_T eottp2wq2b ; boolean_T hv3cm0cioe ;
boolean_T jtr2pdj40h ; boolean_T az214v0nqt ; boolean_T axtegouoxr ;
boolean_T ihr0u5jxyq ; boolean_T jchleqhuy5 ; boolean_T iu2dpnxnxi ;
boolean_T ddvsbh4eeb ; boolean_T nmgtdqicex ; boolean_T hkz1fvip5h ;
boolean_T b41p410v44 ; boolean_T jngltzcitg ; boolean_T hcizcxtpa5 ; } DW ;
typedef struct { real_T o3znemhc2a ; real_T b3xdnyzu1i ; real_T o3b0zoxyg1 ;
real_T decrl0oxjd ; real_T brvdk5f5hy ; real_T b414ta1ujl ; real_T gjp2vw2s4j
; } X ; typedef struct { real_T o3znemhc2a ; real_T b3xdnyzu1i ; real_T
o3b0zoxyg1 ; real_T decrl0oxjd ; real_T brvdk5f5hy ; real_T b414ta1ujl ;
real_T gjp2vw2s4j ; } XDot ; typedef struct { boolean_T o3znemhc2a ;
boolean_T b3xdnyzu1i ; boolean_T o3b0zoxyg1 ; boolean_T decrl0oxjd ;
boolean_T brvdk5f5hy ; boolean_T b414ta1ujl ; boolean_T gjp2vw2s4j ; } XDis ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ {
ssbus simstruct ; real_T LowPassFilterDiscreteorContinuous3_K ; real_T
LowPassFilterDiscreteorContinuous4_K ; real_T
LowPassFilterDiscreteorContinuous5_K ; real_T
LowPassFilterDiscreteorContinuous3_T ; real_T
LowPassFilterDiscreteorContinuous4_T ; real_T
LowPassFilterDiscreteorContinuous5_T ; real_T CompareToConstant_const ;
real_T CompareToConstant_const_izdv1scwad ; real_T
CompareToConstant_const_a4stry1zs4 ; real_T mmdistancesensors_debug ; real_T
LowPassFilterDiscreteorContinuous3_init_option ; real_T
LowPassFilterDiscreteorContinuous4_init_option ; real_T
LowPassFilterDiscreteorContinuous5_init_option ; real_T mmrobotpose_theta0 ;
real_T mmwheelencoders_ticsperrev ; real_T mmsimplerobot_x0 ; real_T
mmsimplerobot_y0 ; real_T Out1_Y0 ; real_T Constant_Value ; real_T
Constant_Value_ofajz0vmqk ; real_T Constant_Value_iweutw4dc2 ; real_T
Integrator_gainval ; real_T Integrator_UpperSat ; real_T Integrator_LowerSat
; real_T Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T
Integrator_gainval_pmkfkwu0cc ; real_T Integrator_UpperSat_kzv3sf2wkn ;
real_T Integrator_LowerSat_et0vhzjblr ; real_T Saturation_UpperSat_lqq4s3fwjp
; real_T Saturation_LowerSat_az2le0w5qs ; real_T
Integrator_gainval_oyqv0ladld ; real_T Integrator_UpperSat_fgmadlykzp ;
real_T Integrator_LowerSat_kbaak3f5xe ; real_T Saturation_UpperSat_my3br2vs03
; real_T Saturation_LowerSat_awul2wab42 ; real_T Integrator1_IC ; real_T
Integrator1_IC_kg1uujsnot ; real_T Integrator_IC ; real_T Gain4_Gain ; real_T
errormargin_Gain ; real_T distanceconverter_Gain ; real_T Gain_Gain ; real_T
Gain1_Gain ; real_T Integrator_IC_ngb3lucrsz ; real_T
Constant_Value_e2dunptcm0 ; real_T Constant_Value_e5jcotvvny ; real_T
Constant1_Value [ 3 ] ; real_T Constant_Value_lr4ms5o4l0 ; real_T
Constant1_Value_ddcl5gh2ak ; real_T Constant2_Value ; void *
OLED_STRING1_String ; void * OLED_STRING2_String ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_mm_autograde_M2_nice_GetDWork ( ) ; extern
void mr_mm_autograde_M2_nice_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_mm_autograde_M2_nice_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * mm_autograde_M2_nice_GetCAPIStaticMap
( void ) ; extern SimStruct * const rtS ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
