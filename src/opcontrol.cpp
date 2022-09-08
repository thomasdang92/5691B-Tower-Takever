#include "main.h"

void opcontrol(){
	Chris.rumble("--");
	pros::Task tdrive(drive, (void*)"PROS", TASK_PRIORITY_DEFAULT);
	pros::Task tintake(intake, (void*)"PROS", TASK_PRIORITY_DEFAULT);
	pros::Task tTray(tray, (void*)"PROS", TASK_PRIORITY_DEFAULT);
	pros::Task tlift(lift, (void*)"PROS", TASK_PRIORITY_DEFAULT);
}
