#include "main.h"

//Allows for the following to exisit in all programs/files

//Variables
extern int program;

//2D Motion Profiling
extern std::shared_ptr<ChassisController> myChassis;
extern std::shared_ptr<AsyncMotionProfileController> eatProfile;
extern std::shared_ptr<AsyncMotionProfileController> fastProfile;
extern std::shared_ptr<AsyncMotionProfileController> mediumProfile;
extern std::shared_ptr<AsyncMotionProfileController> slowProfile;
extern std::shared_ptr<AsyncMotionProfileController> oneProfile;

//Robot Setup
extern pros::Controller Chris;
extern pros::Motor leftFrontDrive;
extern pros::Motor leftBackDrive;
extern pros::Motor rightBackDrive;
extern pros::Motor rightFrontDrive;
extern pros::Motor liftMotor;
extern pros::Motor leftIntakeMotor;
extern pros::Motor rightIntakeMotor;
extern pros::Motor trayMotor;
extern pros::ADIButton tilterStop;
//extern pros::ADIAnalogOut pinkLED;
//extern pros::ADILineSensor leftSensor;
//extern pros::ADILineSensor rightSensor;
