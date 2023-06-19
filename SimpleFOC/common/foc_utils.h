#ifndef __FOC_UTILS_H
#define __FOC_UTILS_H

#include <math.h>

/**********************************************************/
// sign function
#define _sign(a) ( ( (a) < 0 )  ?  -1   : ( (a) > 0 ) )
#define _round(x) ((x)>=0?(long)((x)+0.5):(long)((x)-0.5))
#define _sqrt(a) (_sqrtApprox(a))

// utility defines
#define _SQRT3  1.73205080757
#define _PI     3.14159265359
#define _PI_2   1.57079632679
#define _PI_3   1.0471975512
#define _2PI    6.28318530718
#define _3PI_2  4.71238898038
/**********************************************************/
// d、q电压
typedef struct
{
  float d;
  float q;
} DQVoltage_s;

/**********************************************************/
float _sin(float a);
float _cos(float a);
float _normalizeAngle(float angle);
float _electricalAngle(float shaft_angle, int pole_pairs);
float _sqrtApprox(float number);
/**********************************************************/
#endif