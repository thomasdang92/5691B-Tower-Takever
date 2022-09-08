#include "main.h"

pros::Controller Chris(CONTROLLER_MASTER);

pros::Motor leftFrontDrive(1, MOTOR_GEARSET_18, false, MOTOR_ENCODER_DEGREES);
pros::Motor leftBackDrive(19, MOTOR_GEARSET_18, false, MOTOR_ENCODER_DEGREES);
pros::Motor rightBackDrive(13, MOTOR_GEARSET_18, true, MOTOR_ENCODER_DEGREES);
pros::Motor rightFrontDrive(17, MOTOR_GEARSET_18, true, MOTOR_ENCODER_DEGREES);
pros::Motor liftMotor(20, MOTOR_GEARSET_36, true, MOTOR_ENCODER_DEGREES);
pros::Motor leftIntakeMotor(3, MOTOR_GEARSET_18, false, MOTOR_ENCODER_DEGREES);
pros::Motor rightIntakeMotor(2, MOTOR_GEARSET_18, true, MOTOR_ENCODER_DEGREES);
pros::Motor trayMotor(11, MOTOR_GEARSET_36, true, MOTOR_ENCODER_DEGREES);

pros::ADIButton tilterStop('H');
//pros::ADIAnalogOut pinkLED('G');

//pros::ADILineSensor leftSensor('A');
//pros::ADILineSensor rightSensor('B');
