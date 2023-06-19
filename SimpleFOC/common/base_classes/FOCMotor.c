
#include "FOCMotor.h"

float shaft_angle;        //!< 电机电流角
MotionControlType controller;
float shaft_velocity_sp;  // 速度
float shaft_angle_sp;     // 角度
DQVoltage_s voltage;

//float sensor_offset=0;
//float zero_electric_angle;
/******************************************************************************/
//float electricalAngle(void)
//{
//  return _normalizeAngle((shaft_angle + sensor_offset) * pole_pairs - zero_electric_angle);
//}
/******************************************************************************/