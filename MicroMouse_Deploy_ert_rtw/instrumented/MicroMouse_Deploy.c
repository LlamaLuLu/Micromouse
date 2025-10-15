/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MicroMouse_Deploy.c
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

#include "MicroMouse_Deploy.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "rtwtypes.h"
#include "MicroMouse_Deploy_private.h"
#include "code_profiling_utility_functions.h"

/* Block signals (default storage) */
B_MicroMouse_Deploy_T MicroMouse_Deploy_B;

/* Continuous states */
X_MicroMouse_Deploy_T MicroMouse_Deploy_X;

/* Disabled State Vector */
XDis_MicroMouse_Deploy_T MicroMouse_Deploy_XDis;

/* Real-time model */
static RT_MODEL_MicroMouse_Deploy_T MicroMouse_Deploy_M_;
RT_MODEL_MicroMouse_Deploy_T *const MicroMouse_Deploy_M = &MicroMouse_Deploy_M_;

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = (ODE3_IntgData *)rtsiGetSolverData(si);
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 3;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                (uint_T)nXc*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  MicroMouse_Deploy_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  MicroMouse_Deploy_step();
  MicroMouse_Deploy_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  MicroMouse_Deploy_step();
  MicroMouse_Deploy_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void MicroMouse_Deploy_step(void)
{
  real_T Product4;
  real_T Product4_e;
  real_T Product4_l;
  real_T tmp;
  char_T rtb_ComposeString1_0[256];
  char_T rtb_ComposeString2_0[256];
  char_T rtb_ComposeString4_0[256];
  char_T rtb_ComposeString_0[256];
  if (rtmIsMajorTimeStep(MicroMouse_Deploy_M)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&MicroMouse_Deploy_M->solverInfo,
                          ((MicroMouse_Deploy_M->Timing.clockTick0+1)*
      MicroMouse_Deploy_M->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(MicroMouse_Deploy_M)) {
    MicroMouse_Deploy_M->Timing.t[0] = rtsiGetT(&MicroMouse_Deploy_M->solverInfo);
  }

  /* Product: '<S14>/Product4' incorporates:
   *  Constant: '<S4>/Constant3'
   *  Integrator: '<S14>/Integrator'
   */
  Product4 = MicroMouse_Deploy_P.Constant3_Value *
    MicroMouse_Deploy_X.Integrator_CSTATE;

  /* Product: '<S15>/Product4' incorporates:
   *  Constant: '<S4>/Constant2'
   *  Integrator: '<S15>/Integrator'
   */
  Product4_l = MicroMouse_Deploy_P.Constant2_Value *
    MicroMouse_Deploy_X.Integrator_CSTATE_j;

  /* Product: '<S16>/Product4' incorporates:
   *  Constant: '<S4>/Constant4'
   *  Integrator: '<S16>/Integrator'
   */
  Product4_e = MicroMouse_Deploy_P.Constant4_Value *
    MicroMouse_Deploy_X.Integrator_CSTATE_m;
  if (rtmIsMajorTimeStep(MicroMouse_Deploy_M)) {
    /* DataTypeConversion: '<S1>/Cast1' incorporates:
     *  DataStoreWrite: '<S1>/Data Store Write1'
     *  Gain: '<Root>/Gain1'
     */
    MOTOR_RS = 0;

    /* DataTypeConversion: '<S1>/Cast' incorporates:
     *  DataStoreWrite: '<S1>/Data Store Write'
     *  Gain: '<Root>/Gain'
     */
    MOTOR_LS = 0;

    /* ComposeString: '<S2>/Compose String' incorporates:
     *  StringConstant: '<S4>/OLED_STRING1'
     */
    snprintf(&rtb_ComposeString4_0[0], 256U, "%-18s",
             &MicroMouse_Deploy_P.OLED_STRING1_String[0]);

    /* StringToASCII: '<S2>/String to ASCII' incorporates:
     *  ComposeString: '<S2>/Compose String'
     */
    strncpy((char_T *)&oled_string1[0], &rtb_ComposeString4_0[0], 18U);

    /* ComposeString: '<S2>/Compose String1' incorporates:
     *  StringConstant: '<S4>/OLED_STRING2'
     */
    snprintf(&rtb_ComposeString4_0[0], 256U, "%-18s",
             &MicroMouse_Deploy_P.OLED_STRING2_String[0]);

    /* StringToASCII: '<S2>/String to ASCII1' incorporates:
     *  ComposeString: '<S2>/Compose String1'
     */
    strncpy((char_T *)&oled_string2[0], &rtb_ComposeString4_0[0], 18U);

    /* ComposeString: '<S4>/Compose String' incorporates:
     *  Product: '<S14>/Product4'
     *  Product: '<S15>/Product4'
     *  Product: '<S16>/Product4'
     */
    snprintf(&rtb_ComposeString_0[0], 256U, "L%.2f F%.2f R%.2f", Product4,
             Product4_l, Product4_e);

    /* ComposeString: '<S2>/Compose String2' incorporates:
     *  ComposeString: '<S4>/Compose String'
     */
    snprintf(&rtb_ComposeString4_0[0], 256U, "%-18s", &rtb_ComposeString_0[0]);

    /* StringToASCII: '<S2>/String to ASCII2' incorporates:
     *  ComposeString: '<S2>/Compose String2'
     */
    strncpy((char_T *)&oled_string3[0], &rtb_ComposeString4_0[0], 18U);

    /* ComposeString: '<S4>/Compose String1' incorporates:
     *  DataStoreRead: '<S5>/Data Store Read'
     */
    snprintf(&rtb_ComposeString1_0[0], 256U, "X%2.1f  Y%2.1f  Z%2.1f",
             IMU_Accel[0], IMU_Accel[1], IMU_Accel[2]);

    /* ComposeString: '<S2>/Compose String3' incorporates:
     *  ComposeString: '<S4>/Compose String1'
     */
    snprintf(&rtb_ComposeString4_0[0], 256U, "%-18s", &rtb_ComposeString1_0[0]);

    /* StringToASCII: '<S2>/String to ASCII3' incorporates:
     *  ComposeString: '<S2>/Compose String3'
     */
    strncpy((char_T *)&oled_string4[0], &rtb_ComposeString4_0[0], 18U);

    /* ComposeString: '<S4>/Compose String2' incorporates:
     *  DataStoreRead: '<S8>/Data Store Read'
     *  DataStoreRead: '<S8>/Data Store Read2'
     *  DataStoreRead: '<S8>/Data Store Read4'
     *  DataTypeConversion: '<S8>/Cast To Single'
     *  DataTypeConversion: '<S8>/Cast To Single2'
     *  DataTypeConversion: '<S8>/Cast To Single4'
     *  Gain: '<S4>/Gain2'
     */
    snprintf(&rtb_ComposeString2_0[0], 256U, "%1.2fV  %3.0fmA  %2.0f%%",
             MicroMouse_Deploy_P.Gain2_Gain * (real32_T)Vbattery, (real32_T)
             Current, (real32_T)batteryLife);

    /* ComposeString: '<S2>/Compose String4' incorporates:
     *  ComposeString: '<S4>/Compose String2'
     */
    snprintf(&rtb_ComposeString4_0[0], 256U, "%-18s", &rtb_ComposeString2_0[0]);

    /* StringToASCII: '<S2>/String to ASCII4' incorporates:
     *  ComposeString: '<S2>/Compose String4'
     */
    strncpy((char_T *)&oled_string5[0], &rtb_ComposeString4_0[0], 18U);

    /* DataTypeConversion: '<S9>/Cast To Boolean' incorporates:
     *  Constant: '<S4>/Constant'
     *  DataStoreWrite: '<S9>/Data Store Write'
     */
    tmp = fmod(floor(MicroMouse_Deploy_P.Constant_Value), 256.0);
    STATE = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp :
                      (int32_T)(uint8_T)tmp);
  }

  /* DataTypeConversion: '<S6>/Cast To Boolean' incorporates:
   *  Constant: '<S4>/Constant1'
   *  DataStoreWrite: '<S6>/Data Store Write'
   *  RelationalOperator: '<S4>/GreaterThan'
   *  RelationalOperator: '<S4>/GreaterThan1'
   *  RelationalOperator: '<S4>/GreaterThan2'
   */
  LED[0] = (uint8_T)(Product4 <= MicroMouse_Deploy_P.Constant1_Value);
  LED[1] = (uint8_T)(Product4_l <= MicroMouse_Deploy_P.Constant1_Value);
  LED[2] = (uint8_T)(Product4_e <= MicroMouse_Deploy_P.Constant1_Value);

  /* Sum: '<S14>/Sum2' incorporates:
   *  DataStoreRead: '<S10>/Data Store Read'
   *  DataTypeConversion: '<S10>/Cast To Single'
   *  Gain: '<S10>/Gain'
   */
  MicroMouse_Deploy_B.Sum2 = MicroMouse_Deploy_P.Gain_Gain_g * (real32_T)
    TOF_Distance[0] - Product4;

  /* Sum: '<S15>/Sum2' incorporates:
   *  DataStoreRead: '<S10>/Data Store Read'
   *  DataTypeConversion: '<S10>/Cast To Single'
   *  Gain: '<S10>/Gain'
   */
  MicroMouse_Deploy_B.Sum2_n = MicroMouse_Deploy_P.Gain_Gain_g * (real32_T)
    TOF_Distance[1] - Product4_l;

  /* Sum: '<S16>/Sum2' incorporates:
   *  DataStoreRead: '<S10>/Data Store Read'
   *  DataTypeConversion: '<S10>/Cast To Single'
   *  Gain: '<S10>/Gain'
   */
  MicroMouse_Deploy_B.Sum2_k = MicroMouse_Deploy_P.Gain_Gain_g * (real32_T)
    TOF_Distance[2] - Product4_e;
  if (rtmIsMajorTimeStep(MicroMouse_Deploy_M)) {
    {
      {
        /* user code (Update function Header) */

        /* System '<Root>' */
        refreshTOFValues();

        /* System '<Root>' */
        refreshINA219Values();

        /* System '<Root>' */
        refreshSWValues();

        /* System '<Root>' */
        refreshLEDs();

        /* System '<Root>' */
        refreshIMUValues();

        /* System '<Root>' */
        refreshADCs();

        /* System '<Root>' */
        refreshScreen();

        /* System '<Root>' */
        refreshMotors();

        /* System '<Root>' */
        refreshLoggedData();
      }
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(MicroMouse_Deploy_M)) {
    rt_ertODEUpdateContinuousStates(&MicroMouse_Deploy_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++MicroMouse_Deploy_M->Timing.clockTick0;
    MicroMouse_Deploy_M->Timing.t[0] = rtsiGetSolverStopTime
      (&MicroMouse_Deploy_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.01s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.01, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      MicroMouse_Deploy_M->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void MicroMouse_Deploy_derivatives(void)
{
  XDot_MicroMouse_Deploy_T *_rtXdot;
  _rtXdot = ((XDot_MicroMouse_Deploy_T *) MicroMouse_Deploy_M->derivs);

  /* Derivatives for Integrator: '<S14>/Integrator' */
  _rtXdot->Integrator_CSTATE = MicroMouse_Deploy_B.Sum2;

  /* Derivatives for Integrator: '<S15>/Integrator' */
  _rtXdot->Integrator_CSTATE_j = MicroMouse_Deploy_B.Sum2_n;

  /* Derivatives for Integrator: '<S16>/Integrator' */
  _rtXdot->Integrator_CSTATE_m = MicroMouse_Deploy_B.Sum2_k;
}

/* Model initialize function */
void MicroMouse_Deploy_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&MicroMouse_Deploy_M->solverInfo,
                          &MicroMouse_Deploy_M->Timing.simTimeStep);
    rtsiSetTPtr(&MicroMouse_Deploy_M->solverInfo, &rtmGetTPtr
                (MicroMouse_Deploy_M));
    rtsiSetStepSizePtr(&MicroMouse_Deploy_M->solverInfo,
                       &MicroMouse_Deploy_M->Timing.stepSize0);
    rtsiSetdXPtr(&MicroMouse_Deploy_M->solverInfo, &MicroMouse_Deploy_M->derivs);
    rtsiSetContStatesPtr(&MicroMouse_Deploy_M->solverInfo, (real_T **)
                         &MicroMouse_Deploy_M->contStates);
    rtsiSetNumContStatesPtr(&MicroMouse_Deploy_M->solverInfo,
      &MicroMouse_Deploy_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&MicroMouse_Deploy_M->solverInfo,
      &MicroMouse_Deploy_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&MicroMouse_Deploy_M->solverInfo,
      &MicroMouse_Deploy_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&MicroMouse_Deploy_M->solverInfo,
      &MicroMouse_Deploy_M->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&MicroMouse_Deploy_M->solverInfo, (boolean_T**)
      &MicroMouse_Deploy_M->contStateDisabled);
    rtsiSetErrorStatusPtr(&MicroMouse_Deploy_M->solverInfo, (&rtmGetErrorStatus
      (MicroMouse_Deploy_M)));
    rtsiSetRTModelPtr(&MicroMouse_Deploy_M->solverInfo, MicroMouse_Deploy_M);
  }

  rtsiSetSimTimeStep(&MicroMouse_Deploy_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&MicroMouse_Deploy_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&MicroMouse_Deploy_M->solverInfo, false);
  MicroMouse_Deploy_M->intgData.y = MicroMouse_Deploy_M->odeY;
  MicroMouse_Deploy_M->intgData.f[0] = MicroMouse_Deploy_M->odeF[0];
  MicroMouse_Deploy_M->intgData.f[1] = MicroMouse_Deploy_M->odeF[1];
  MicroMouse_Deploy_M->intgData.f[2] = MicroMouse_Deploy_M->odeF[2];
  MicroMouse_Deploy_M->contStates = ((X_MicroMouse_Deploy_T *)
    &MicroMouse_Deploy_X);
  MicroMouse_Deploy_M->contStateDisabled = ((XDis_MicroMouse_Deploy_T *)
    &MicroMouse_Deploy_XDis);
  MicroMouse_Deploy_M->Timing.tStart = (0.0);
  rtsiSetSolverData(&MicroMouse_Deploy_M->solverInfo, (void *)
                    &MicroMouse_Deploy_M->intgData);
  rtsiSetSolverName(&MicroMouse_Deploy_M->solverInfo,"ode3");
  rtmSetTPtr(MicroMouse_Deploy_M, &MicroMouse_Deploy_M->Timing.tArray[0]);
  MicroMouse_Deploy_M->Timing.stepSize0 = 0.01;

  {
    int32_T i;

    /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
    MOTOR_LS = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_oa;

    /* Start for DataStoreMemory: '<S1>/Data Store Memory1' */
    MOTOR_RS = MicroMouse_Deploy_P.DataStoreMemory1_InitialValu_p2;
    for (i = 0; i < 18; i++) {
      /* Start for DataStoreMemory: '<S2>/Data Store Memory' */
      oled_string1[i] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_e;

      /* Start for DataStoreMemory: '<S2>/Data Store Memory1' incorporates:
       *  DataStoreMemory: '<S2>/Data Store Memory'
       */
      oled_string2[i] = MicroMouse_Deploy_P.DataStoreMemory1_InitialValue_b;

      /* Start for DataStoreMemory: '<S2>/Data Store Memory2' incorporates:
       *  DataStoreMemory: '<S2>/Data Store Memory'
       */
      oled_string3[i] = MicroMouse_Deploy_P.DataStoreMemory2_InitialValue_p;

      /* Start for DataStoreMemory: '<S2>/Data Store Memory3' incorporates:
       *  DataStoreMemory: '<S2>/Data Store Memory'
       */
      oled_string4[i] = MicroMouse_Deploy_P.DataStoreMemory3_InitialValue_c;

      /* Start for DataStoreMemory: '<S2>/Data Store Memory4' incorporates:
       *  DataStoreMemory: '<S2>/Data Store Memory'
       */
      oled_string5[i] = MicroMouse_Deploy_P.DataStoreMemory4_InitialValue_f;
    }

    /* Start for DataStoreMemory: '<S9>/Data Store Memory' */
    STATE = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_n;

    /* Start for DataStoreMemory: '<S3>/Data Store Memory' */
    V_BATT = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_b;

    /* Start for DataStoreMemory: '<S3>/Data Store Memory1' */
    V_PHOTO_DOWN_LS = MicroMouse_Deploy_P.DataStoreMemory1_InitialValue_a;

    /* Start for DataStoreMemory: '<S3>/Data Store Memory2' */
    V_PHOTO_DOWN_RS = MicroMouse_Deploy_P.DataStoreMemory2_InitialValue_e;

    /* Start for DataStoreMemory: '<S3>/Data Store Memory3' */
    V_PHOTO_MOT_LS = MicroMouse_Deploy_P.DataStoreMemory3_InitialValue_n;

    /* Start for DataStoreMemory: '<S3>/Data Store Memory4' */
    V_PHOTO_MOT_RS = MicroMouse_Deploy_P.DataStoreMemory4_InitialValue;

    /* Start for DataStoreMemory: '<S6>/Data Store Memory' */
    LED[0] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_c;

    /* Start for DataStoreMemory: '<S5>/Data Store Memory' */
    IMU_Accel[0] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<S5>/Data Store Memory1' */
    IMU_Gyro[0] = MicroMouse_Deploy_P.DataStoreMemory1_InitialValue;

    /* Start for DataStoreMemory: '<S6>/Data Store Memory' */
    LED[1] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_c;

    /* Start for DataStoreMemory: '<S5>/Data Store Memory' */
    IMU_Accel[1] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<S5>/Data Store Memory1' */
    IMU_Gyro[1] = MicroMouse_Deploy_P.DataStoreMemory1_InitialValue;

    /* Start for DataStoreMemory: '<S6>/Data Store Memory' */
    LED[2] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_c;

    /* Start for DataStoreMemory: '<S5>/Data Store Memory' */
    IMU_Accel[2] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<S5>/Data Store Memory1' */
    IMU_Gyro[2] = MicroMouse_Deploy_P.DataStoreMemory1_InitialValue;

    /* Start for DataStoreMemory: '<S5>/Data Store Memory2' */
    IMU_Temp = MicroMouse_Deploy_P.DataStoreMemory2_InitialValue;

    /* Start for DataStoreMemory: '<S7>/Data Store Memory' */
    SW[0] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_h;
    SW[1] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_h;

    /* Start for DataStoreMemory: '<S8>/Data Store Memory' */
    Vbattery = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_l;

    /* Start for DataStoreMemory: '<S8>/Data Store Memory1' */
    Vshunt = MicroMouse_Deploy_P.DataStoreMemory1_InitialValue_p;

    /* Start for DataStoreMemory: '<S8>/Data Store Memory2' */
    Current = MicroMouse_Deploy_P.DataStoreMemory2_InitialValue_n;

    /* Start for DataStoreMemory: '<S8>/Data Store Memory3' */
    Power = MicroMouse_Deploy_P.DataStoreMemory3_InitialValue_g;

    /* Start for DataStoreMemory: '<S8>/Data Store Memory4' */
    batteryLife = MicroMouse_Deploy_P.DataStoreMemory4_InitialValue_k;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory' */
    TOF_Distance[0] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_o;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory1' */
    TOF_Ambient[0] = MicroMouse_Deploy_P.DataStoreMemory1_InitialValue_h;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory2' */
    TOF_Signal[0] = MicroMouse_Deploy_P.DataStoreMemory2_InitialValue_g;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory3' */
    TOF_Status[0] = MicroMouse_Deploy_P.DataStoreMemory3_InitialValue;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory' */
    TOF_Distance[1] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_o;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory1' */
    TOF_Ambient[1] = MicroMouse_Deploy_P.DataStoreMemory1_InitialValue_h;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory2' */
    TOF_Signal[1] = MicroMouse_Deploy_P.DataStoreMemory2_InitialValue_g;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory3' */
    TOF_Status[1] = MicroMouse_Deploy_P.DataStoreMemory3_InitialValue;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory' */
    TOF_Distance[2] = MicroMouse_Deploy_P.DataStoreMemory_InitialValue_o;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory1' */
    TOF_Ambient[2] = MicroMouse_Deploy_P.DataStoreMemory1_InitialValue_h;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory2' */
    TOF_Signal[2] = MicroMouse_Deploy_P.DataStoreMemory2_InitialValue_g;

    /* Start for DataStoreMemory: '<S10>/Data Store Memory3' */
    TOF_Status[2] = MicroMouse_Deploy_P.DataStoreMemory3_InitialValue;

    {
      /* user code (Initialize function Header) */

      /* System '<Root>' */
      initTOFs(1);

      /* System '<Root>' */
      initSW();

      /* System '<Root>' */
      initLEDs();

      /* System '<Root>' */
      initIMU();

      /* System '<Root>' */
      initScreen();

      /* System '<Root>' */
      initMotors();

      /* System '<Root>' */
      I2C_HandleTypeDef hi2c1;
      I2C_HandleTypeDef hi2c2;
      ADC_HandleTypeDef hadc1;
      DMA_HandleTypeDef hdma_adc1;
      initLogs();
      __enable_irq();

      /* user code (Initialize function Body) */

      /* System '<Root>' */
      initINA219();

      /* System '<Root>' */
      initADCs();

      /* InitializeConditions for Integrator: '<S14>/Integrator' */
      MicroMouse_Deploy_X.Integrator_CSTATE = MicroMouse_Deploy_P.Integrator_IC;

      /* InitializeConditions for Integrator: '<S15>/Integrator' */
      MicroMouse_Deploy_X.Integrator_CSTATE_j =
        MicroMouse_Deploy_P.Integrator_IC_l;

      /* InitializeConditions for Integrator: '<S16>/Integrator' */
      MicroMouse_Deploy_X.Integrator_CSTATE_m =
        MicroMouse_Deploy_P.Integrator_IC_p;
    }
  }

  {
  }
}

/* Model terminate function */
void MicroMouse_Deploy_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
