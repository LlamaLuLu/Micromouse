/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MicroMouse_Deploy.h
 *
 * Code generated for Simulink model 'MicroMouse_Deploy'.
 *
 * Model version                  : 5.1
 * Simulink Coder version         : 25.1 (R2025a) 21-Nov-2024
 * C/C++ source code generated on : Mon Sep  1 17:38:19 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef MicroMouse_Deploy_h_
#define MicroMouse_Deploy_h_
#ifndef MicroMouse_Deploy_COMMON_INCLUDES_
#define MicroMouse_Deploy_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* MicroMouse_Deploy_COMMON_INCLUDES_ */

#include "MicroMouse_Deploy_types.h"
#include <string.h>
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

/* user code (top of header file) */
#include "MicroMouseProgramming_Code\Core\Inc\IMU.h"
#include "MicroMouseProgramming_Code\Core\Inc\Motors.h"
#include "MicroMouseProgramming_Code\Core\Inc\SSD1306.h"
#include "MicroMouseProgramming_Code\Core\Inc\VL53L0X.h"
#include "MicroMouseProgramming_Code\Core\Inc\ADCs.h"
#include "MicroMouseProgramming_Code\Core\Inc\Buttons.h"
#include "MicroMouseProgramming_Code\Core\Inc\LEDs.h"
#include "MicroMouseProgramming_Code\Core\Inc\INA219.h"
#include "MicroMouseProgramming_Code\Core\Inc\preformatted_flash.h"

/* Block signals (default storage) */
typedef struct {
  real_T Sum2;                         /* '<S14>/Sum2' */
  real_T Sum2_n;                       /* '<S15>/Sum2' */
  real_T Sum2_k;                       /* '<S16>/Sum2' */
} B_MicroMouse_Deploy_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S14>/Integrator' */
  real_T Integrator_CSTATE_j;          /* '<S15>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S16>/Integrator' */
} X_MicroMouse_Deploy_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<S14>/Integrator' */
  real_T Integrator_CSTATE_j;          /* '<S15>/Integrator' */
  real_T Integrator_CSTATE_m;          /* '<S16>/Integrator' */
} XDot_MicroMouse_Deploy_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<S14>/Integrator' */
  boolean_T Integrator_CSTATE_j;       /* '<S15>/Integrator' */
  boolean_T Integrator_CSTATE_m;       /* '<S16>/Integrator' */
} XDis_MicroMouse_Deploy_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters (default storage) */
struct P_MicroMouse_Deploy_T_ {
  real_T Constant3_Value;              /* Expression: 1000/(2*pi)
                                        * Referenced by: '<S4>/Constant3'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<S14>/Integrator'
                                        */
  real_T Constant2_Value;              /* Expression: 1000/(2*pi)
                                        * Referenced by: '<S4>/Constant2'
                                        */
  real_T Integrator_IC_l;              /* Expression: 0
                                        * Referenced by: '<S15>/Integrator'
                                        */
  real_T Constant4_Value;              /* Expression: 1000/(2*pi)
                                        * Referenced by: '<S4>/Constant4'
                                        */
  real_T Integrator_IC_p;              /* Expression: 0
                                        * Referenced by: '<S16>/Integrator'
                                        */
  real_T Constant1_Value;              /* Expression: 0.3
                                        * Referenced by: '<S4>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 27
                                        * Referenced by: '<S4>/Constant'
                                        */
  char_T OLED_STRING1_String[256];     /* Expression: "UCT MICROMOUSE '25"
                                        * Referenced by: '<S4>/OLED_STRING1'
                                        */
  char_T OLED_STRING2_String[256];     /* Expression: "Simulink Data Demo"
                                        * Referenced by: '<S4>/OLED_STRING2'
                                        */
  real32_T Gain1_Gain;                 /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real32_T Gain_Gain;                  /* Computed Parameter: Gain_Gain
                                        * Referenced by: '<Root>/Gain'
                                        */
  real32_T Gain2_Gain;                 /* Computed Parameter: Gain2_Gain
                                        * Referenced by: '<S4>/Gain2'
                                        */
  real32_T Gain_Gain_g;                /* Computed Parameter: Gain_Gain_g
                                        * Referenced by: '<S10>/Gain'
                                        */
  real32_T DataStoreMemory_InitialValue;
                             /* Computed Parameter: DataStoreMemory_InitialValue
                              * Referenced by: '<S5>/Data Store Memory'
                              */
  real32_T DataStoreMemory1_InitialValue;
                            /* Computed Parameter: DataStoreMemory1_InitialValue
                             * Referenced by: '<S5>/Data Store Memory1'
                             */
  real32_T DataStoreMemory2_InitialValue;
                            /* Computed Parameter: DataStoreMemory2_InitialValue
                             * Referenced by: '<S5>/Data Store Memory2'
                             */
  uint32_T DataStoreMemory_InitialValue_o;
                           /* Computed Parameter: DataStoreMemory_InitialValue_o
                            * Referenced by: '<S10>/Data Store Memory'
                            */
  uint32_T DataStoreMemory3_InitialValue;
                            /* Computed Parameter: DataStoreMemory3_InitialValue
                             * Referenced by: '<S10>/Data Store Memory3'
                             */
  int16_T DataStoreMemory_InitialValue_l;
                           /* Computed Parameter: DataStoreMemory_InitialValue_l
                            * Referenced by: '<S8>/Data Store Memory'
                            */
  int16_T DataStoreMemory1_InitialValue_p;
                          /* Computed Parameter: DataStoreMemory1_InitialValue_p
                           * Referenced by: '<S8>/Data Store Memory1'
                           */
  int16_T DataStoreMemory2_InitialValue_n;
                          /* Computed Parameter: DataStoreMemory2_InitialValue_n
                           * Referenced by: '<S8>/Data Store Memory2'
                           */
  int16_T DataStoreMemory3_InitialValue_g;
                          /* Computed Parameter: DataStoreMemory3_InitialValue_g
                           * Referenced by: '<S8>/Data Store Memory3'
                           */
  int16_T DataStoreMemory1_InitialValue_h;
                          /* Computed Parameter: DataStoreMemory1_InitialValue_h
                           * Referenced by: '<S10>/Data Store Memory1'
                           */
  int16_T DataStoreMemory2_InitialValue_g;
                          /* Computed Parameter: DataStoreMemory2_InitialValue_g
                           * Referenced by: '<S10>/Data Store Memory2'
                           */
  uint16_T DataStoreMemory_InitialValue_b;
                           /* Computed Parameter: DataStoreMemory_InitialValue_b
                            * Referenced by: '<S3>/Data Store Memory'
                            */
  uint16_T DataStoreMemory1_InitialValue_a;
                          /* Computed Parameter: DataStoreMemory1_InitialValue_a
                           * Referenced by: '<S3>/Data Store Memory1'
                           */
  uint16_T DataStoreMemory2_InitialValue_e;
                          /* Computed Parameter: DataStoreMemory2_InitialValue_e
                           * Referenced by: '<S3>/Data Store Memory2'
                           */
  uint16_T DataStoreMemory3_InitialValue_n;
                          /* Computed Parameter: DataStoreMemory3_InitialValue_n
                           * Referenced by: '<S3>/Data Store Memory3'
                           */
  uint16_T DataStoreMemory4_InitialValue;
                            /* Computed Parameter: DataStoreMemory4_InitialValue
                             * Referenced by: '<S3>/Data Store Memory4'
                             */
  int8_T DataStoreMemory_InitialValue_oa;
                          /* Computed Parameter: DataStoreMemory_InitialValue_oa
                           * Referenced by: '<S1>/Data Store Memory'
                           */
  int8_T DataStoreMemory1_InitialValu_p2;
                          /* Computed Parameter: DataStoreMemory1_InitialValu_p2
                           * Referenced by: '<S1>/Data Store Memory1'
                           */
  uint8_T DataStoreMemory_InitialValue_e;
                           /* Computed Parameter: DataStoreMemory_InitialValue_e
                            * Referenced by: '<S2>/Data Store Memory'
                            */
  uint8_T DataStoreMemory1_InitialValue_b;
                          /* Computed Parameter: DataStoreMemory1_InitialValue_b
                           * Referenced by: '<S2>/Data Store Memory1'
                           */
  uint8_T DataStoreMemory2_InitialValue_p;
                          /* Computed Parameter: DataStoreMemory2_InitialValue_p
                           * Referenced by: '<S2>/Data Store Memory2'
                           */
  uint8_T DataStoreMemory3_InitialValue_c;
                          /* Computed Parameter: DataStoreMemory3_InitialValue_c
                           * Referenced by: '<S2>/Data Store Memory3'
                           */
  uint8_T DataStoreMemory4_InitialValue_f;
                          /* Computed Parameter: DataStoreMemory4_InitialValue_f
                           * Referenced by: '<S2>/Data Store Memory4'
                           */
  uint8_T DataStoreMemory_InitialValue_c;
                           /* Computed Parameter: DataStoreMemory_InitialValue_c
                            * Referenced by: '<S6>/Data Store Memory'
                            */
  uint8_T DataStoreMemory_InitialValue_n;
                           /* Computed Parameter: DataStoreMemory_InitialValue_n
                            * Referenced by: '<S9>/Data Store Memory'
                            */
  uint8_T DataStoreMemory_InitialValue_h;
                           /* Computed Parameter: DataStoreMemory_InitialValue_h
                            * Referenced by: '<S7>/Data Store Memory'
                            */
  uint8_T DataStoreMemory4_InitialValue_k;
                          /* Computed Parameter: DataStoreMemory4_InitialValue_k
                           * Referenced by: '<S8>/Data Store Memory4'
                           */
};

/* Code_Instrumentation_Declarations_Placeholder */

/* Real-time Model Data Structure */
struct tag_RTM_MicroMouse_Deploy_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_MicroMouse_Deploy_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis_MicroMouse_Deploy_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[3];
  real_T odeF[3][3];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tStart;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_MicroMouse_Deploy_T MicroMouse_Deploy_P;

/* Block signals (default storage) */
extern B_MicroMouse_Deploy_T MicroMouse_Deploy_B;

/* Continuous states (default storage) */
extern X_MicroMouse_Deploy_T MicroMouse_Deploy_X;

/* Disabled states (default storage) */
extern XDis_MicroMouse_Deploy_T MicroMouse_Deploy_XDis;

/* Model entry point functions */
extern void MicroMouse_Deploy_initialize(void);
extern void MicroMouse_Deploy_step(void);
extern void MicroMouse_Deploy_terminate(void);

/* Real-time Model object */
extern RT_MODEL_MicroMouse_Deploy_T *const MicroMouse_Deploy_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Pulse Generator' : Unused code path elimination
 * Block '<S3>/Cast To Single' : Unused code path elimination
 * Block '<S3>/Cast To Single1' : Unused code path elimination
 * Block '<S3>/Cast To Single2' : Unused code path elimination
 * Block '<S3>/Cast To Single3' : Unused code path elimination
 * Block '<S3>/Cast To Single4' : Unused code path elimination
 * Block '<S3>/Gain1' : Unused code path elimination
 * Block '<S3>/Gain2' : Unused code path elimination
 * Block '<S3>/Gain4' : Unused code path elimination
 * Block '<S4>/Scope' : Unused code path elimination
 * Block '<S4>/Scope1' : Unused code path elimination
 * Block '<S5>/Cast To Single1' : Unused code path elimination
 * Block '<S5>/Cast To Single2' : Unused code path elimination
 * Block '<S7>/NOT' : Unused code path elimination
 * Block '<S7>/NOT1' : Unused code path elimination
 * Block '<S8>/Cast To Single1' : Unused code path elimination
 * Block '<S8>/Cast To Single3' : Unused code path elimination
 * Block '<S10>/Cast To Single1' : Unused code path elimination
 * Block '<S10>/Cast To Single2' : Unused code path elimination
 * Block '<S10>/Cast To Single3' : Unused code path elimination
 * Block '<S4>/Cast' : Eliminate redundant data type conversion
 * Block '<S4>/Cast1' : Eliminate redundant data type conversion
 * Block '<S4>/Cast2' : Eliminate redundant data type conversion
 * Block '<S5>/Cast To Single' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'MicroMouse_Deploy'
 * '<S1>'   : 'MicroMouse_Deploy/Motors'
 * '<S2>'   : 'MicroMouse_Deploy/SSD1306'
 * '<S3>'   : 'MicroMouse_Deploy/Subsystem'
 * '<S4>'   : 'MicroMouse_Deploy/Subsystem Reference'
 * '<S5>'   : 'MicroMouse_Deploy/Subsystem1'
 * '<S6>'   : 'MicroMouse_Deploy/Subsystem2'
 * '<S7>'   : 'MicroMouse_Deploy/Subsystem3'
 * '<S8>'   : 'MicroMouse_Deploy/Subsystem4'
 * '<S9>'   : 'MicroMouse_Deploy/Subsystem5'
 * '<S10>'  : 'MicroMouse_Deploy/ToFs'
 * '<S11>'  : 'MicroMouse_Deploy/Subsystem Reference/Varying Lowpass Filter'
 * '<S12>'  : 'MicroMouse_Deploy/Subsystem Reference/Varying Lowpass Filter1'
 * '<S13>'  : 'MicroMouse_Deploy/Subsystem Reference/Varying Lowpass Filter2'
 * '<S14>'  : 'MicroMouse_Deploy/Subsystem Reference/Varying Lowpass Filter/FOS'
 * '<S15>'  : 'MicroMouse_Deploy/Subsystem Reference/Varying Lowpass Filter1/FOS'
 * '<S16>'  : 'MicroMouse_Deploy/Subsystem Reference/Varying Lowpass Filter2/FOS'
 */
#endif                                 /* MicroMouse_Deploy_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
