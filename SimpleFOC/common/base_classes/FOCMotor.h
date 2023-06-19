#ifndef __FOCMOTOR_H
#define __FOCMOTOR_H

#include "foc_utils.h" 
/******************************************************************************/
/**
 *  Motiron control type
 */
typedef enum
{
//	Type_torque,//!< Torque control
//	Type_velocity,//!< Velocity motion control
//	Type_angle,//!< Position/angle motion control
  Type_velocity_openloop,
  Type_angle_openloop
} MotionControlType;

extern float shaft_angle;
extern MotionControlType controller;
extern float shaft_velocity_sp;
extern float shaft_angle_sp;
extern DQVoltage_s voltage;

float electricalAngle(void);
/******************************************************************************/

#endif