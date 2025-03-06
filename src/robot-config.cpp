#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

brain Brain;

controller Controller;
motor FrontRight = motor(PORT1, ratio6_1, true);
motor FrontLeft = motor(PORT2, ratio6_1, true);
motor MiddleRight = motor(PORT3, ratio6_1, false);
motor MiddleLeft = motor(PORT4, ratio6_1, true);
motor BackRight = motor(PORT5, ratio6_1, false);
motor BackLeft = motor(PORT6, ratio6_1, true);

motor_group Left = motor_group(FrontLeft, MiddleLeft, BackLeft);
motor_group Right = motor_group(FrontRight, MiddleRight, BackRight);

void vexcodeInit(void) {}