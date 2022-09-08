#include "main.h"

//User Control Intake Code
void intake(void*){

	while(true){

		if(Chris.get_digital(DIGITAL_R1)){
			leftIntakeMotor.move_voltage(12000);
			rightIntakeMotor.move_voltage(12000);}

		else if(Chris.get_digital(DIGITAL_R2)){
			leftIntakeMotor.move_voltage(-12000);
			rightIntakeMotor.move_voltage(-12000);}

		else{
			leftIntakeMotor.set_brake_mode(MOTOR_BRAKE_BRAKE);
			rightIntakeMotor.set_brake_mode(MOTOR_BRAKE_BRAKE);
			leftIntakeMotor.move_voltage(0);
			rightIntakeMotor.move_voltage(0);}

	pros::delay(10);}
}


//Autonomous Period Intake Code
void intake(){
  leftIntakeMotor.move_voltage(12000);
  rightIntakeMotor.move_voltage(12000);
}


void outtake(){
  leftIntakeMotor.move_voltage(-12000);
  rightIntakeMotor.move_voltage(-12000);
}


void intakeStop(){
  leftIntakeMotor.set_brake_mode(MOTOR_BRAKE_BRAKE);
  rightIntakeMotor.set_brake_mode(MOTOR_BRAKE_BRAKE);
  leftIntakeMotor.move_voltage(0);
  rightIntakeMotor.move_voltage(0);
}


void outtakeLittle(){
  double threshold = -150;
  leftIntakeMotor.tare_position();
  rightIntakeMotor.tare_position();
  leftIntakeMotor.move_absolute(threshold, 200);
  rightIntakeMotor.move_absolute(threshold, 200);

  while (!((((rightIntakeMotor.get_position() + leftIntakeMotor.get_position())/2) < threshold))){
    pros::delay(2);}
}

void outtakeTowerSet(){
	double threshold = -100;
	pros::delay(200);

	leftIntakeMotor.tare_position();
	rightIntakeMotor.tare_position();
	leftIntakeMotor.move_absolute(threshold, 200);
	rightIntakeMotor.move_absolute(threshold, 200);

	while (!((((rightIntakeMotor.get_position() + leftIntakeMotor.get_position())/2) < threshold))){
		pros::delay(2);}

leftIntakeMotor.set_brake_mode(MOTOR_BRAKE_BRAKE);
rightIntakeMotor.set_brake_mode(MOTOR_BRAKE_BRAKE);
}
