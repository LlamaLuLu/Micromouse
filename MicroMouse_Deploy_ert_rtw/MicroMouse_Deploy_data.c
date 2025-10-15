/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MicroMouse_Deploy_data.c
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

/* Block parameters (default storage) */
P_MicroMouse_Deploy_T MicroMouse_Deploy_P = {
  /* Expression: 1000/(2*pi)
   * Referenced by: '<S4>/Constant3'
   */
  159.15494309189535,

  /* Expression: 0
   * Referenced by: '<S14>/Integrator'
   */
  0.0,

  /* Expression: 1000/(2*pi)
   * Referenced by: '<S4>/Constant2'
   */
  159.15494309189535,

  /* Expression: 0
   * Referenced by: '<S15>/Integrator'
   */
  0.0,

  /* Expression: 1000/(2*pi)
   * Referenced by: '<S4>/Constant4'
   */
  159.15494309189535,

  /* Expression: 0
   * Referenced by: '<S16>/Integrator'
   */
  0.0,

  /* Expression: 0.3
   * Referenced by: '<S4>/Constant1'
   */
  0.3,

  /* Expression: 27
   * Referenced by: '<S4>/Constant'
   */
  27.0,

  /* Expression: "UCT MICROMOUSE '25"
   * Referenced by: '<S4>/OLED_STRING1'
   */
  "UCT MICROMOUSE '25",

  /* Expression: "Simulink Data Demo"
   * Referenced by: '<S4>/OLED_STRING2'
   */
  "Simulink Data Demo",

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<Root>/Gain1'
   */
  1.0F,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<Root>/Gain'
   */
  1.0F,

  /* Computed Parameter: Gain2_Gain
   * Referenced by: '<S4>/Gain2'
   */
  0.001F,

  /* Computed Parameter: Gain_Gain_g
   * Referenced by: '<S10>/Gain'
   */
  0.001F,

  /* Computed Parameter: DataStoreMemory_InitialValue
   * Referenced by: '<S5>/Data Store Memory'
   */
  0.0F,

  /* Computed Parameter: DataStoreMemory1_InitialValue
   * Referenced by: '<S5>/Data Store Memory1'
   */
  0.0F,

  /* Computed Parameter: DataStoreMemory2_InitialValue
   * Referenced by: '<S5>/Data Store Memory2'
   */
  0.0F,

  /* Computed Parameter: DataStoreMemory_InitialValue_o
   * Referenced by: '<S10>/Data Store Memory'
   */
  0U,

  /* Computed Parameter: DataStoreMemory3_InitialValue
   * Referenced by: '<S10>/Data Store Memory3'
   */
  0U,

  /* Computed Parameter: DataStoreMemory_InitialValue_l
   * Referenced by: '<S8>/Data Store Memory'
   */
  0,

  /* Computed Parameter: DataStoreMemory1_InitialValue_p
   * Referenced by: '<S8>/Data Store Memory1'
   */
  0,

  /* Computed Parameter: DataStoreMemory2_InitialValue_n
   * Referenced by: '<S8>/Data Store Memory2'
   */
  0,

  /* Computed Parameter: DataStoreMemory3_InitialValue_g
   * Referenced by: '<S8>/Data Store Memory3'
   */
  0,

  /* Computed Parameter: DataStoreMemory1_InitialValue_h
   * Referenced by: '<S10>/Data Store Memory1'
   */
  0,

  /* Computed Parameter: DataStoreMemory2_InitialValue_g
   * Referenced by: '<S10>/Data Store Memory2'
   */
  0,

  /* Computed Parameter: DataStoreMemory_InitialValue_b
   * Referenced by: '<S3>/Data Store Memory'
   */
  0U,

  /* Computed Parameter: DataStoreMemory1_InitialValue_a
   * Referenced by: '<S3>/Data Store Memory1'
   */
  0U,

  /* Computed Parameter: DataStoreMemory2_InitialValue_e
   * Referenced by: '<S3>/Data Store Memory2'
   */
  0U,

  /* Computed Parameter: DataStoreMemory3_InitialValue_n
   * Referenced by: '<S3>/Data Store Memory3'
   */
  0U,

  /* Computed Parameter: DataStoreMemory4_InitialValue
   * Referenced by: '<S3>/Data Store Memory4'
   */
  0U,

  /* Computed Parameter: DataStoreMemory_InitialValue_oa
   * Referenced by: '<S1>/Data Store Memory'
   */
  0,

  /* Computed Parameter: DataStoreMemory1_InitialValu_p2
   * Referenced by: '<S1>/Data Store Memory1'
   */
  0,

  /* Computed Parameter: DataStoreMemory_InitialValue_e
   * Referenced by: '<S2>/Data Store Memory'
   */
  0U,

  /* Computed Parameter: DataStoreMemory1_InitialValue_b
   * Referenced by: '<S2>/Data Store Memory1'
   */
  0U,

  /* Computed Parameter: DataStoreMemory2_InitialValue_p
   * Referenced by: '<S2>/Data Store Memory2'
   */
  0U,

  /* Computed Parameter: DataStoreMemory3_InitialValue_c
   * Referenced by: '<S2>/Data Store Memory3'
   */
  0U,

  /* Computed Parameter: DataStoreMemory4_InitialValue_f
   * Referenced by: '<S2>/Data Store Memory4'
   */
  0U,

  /* Computed Parameter: DataStoreMemory_InitialValue_c
   * Referenced by: '<S6>/Data Store Memory'
   */
  0U,

  /* Computed Parameter: DataStoreMemory_InitialValue_n
   * Referenced by: '<S9>/Data Store Memory'
   */
  0U,

  /* Computed Parameter: DataStoreMemory_InitialValue_h
   * Referenced by: '<S7>/Data Store Memory'
   */
  0U,

  /* Computed Parameter: DataStoreMemory4_InitialValue_k
   * Referenced by: '<S8>/Data Store Memory4'
   */
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
