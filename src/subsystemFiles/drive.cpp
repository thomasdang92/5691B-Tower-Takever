#include "main.h"

//User Control Drive Code
void drive(void*){
	double speedResistor = 1;

	while(true){

		if(Chris.get_digital(DIGITAL_A)){
			if(speedResistor == 0.5){
			speedResistor = 1;
			pros::delay(100);}

			else if(speedResistor == 1){
			speedResistor = 0.5;
			pros::delay(100);}
		}

		leftFrontDrive.set_brake_mode(MOTOR_BRAKE_BRAKE);
		leftBackDrive.set_brake_mode(MOTOR_BRAKE_BRAKE);
		rightBackDrive.set_brake_mode(MOTOR_BRAKE_BRAKE);
		rightFrontDrive.set_brake_mode(MOTOR_BRAKE_BRAKE);

		leftFrontDrive.move((Chris.get_analog(ANALOG_LEFT_Y) + Chris.get_analog(ANALOG_RIGHT_X)*2)  * (speedResistor));
		leftBackDrive.move((Chris.get_analog(ANALOG_LEFT_Y) + Chris.get_analog(ANALOG_RIGHT_X)*2)  * (speedResistor));


		rightBackDrive.move((Chris.get_analog(ANALOG_LEFT_Y) - Chris.get_analog(ANALOG_RIGHT_X)*2)  *(speedResistor));
		rightFrontDrive.move((Chris.get_analog(ANALOG_LEFT_Y) - Chris.get_analog(ANALOG_RIGHT_X)*2)  *(speedResistor));

	pros::delay(10);}
}


//Autonomous Period Drive Code
void turnRight(double speed, double target){
  myChassis->setMaxVelocity(200);
  leftFrontDrive.tare_position();
  leftBackDrive.tare_position();
  rightBackDrive.tare_position();
  rightFrontDrive.tare_position();

  pros::delay(50);

  leftFrontDrive.move_absolute(target, speed);
  leftBackDrive.move_absolute(target, speed);
  rightBackDrive.move_absolute(-target, speed);
  rightFrontDrive.move_absolute(-target, speed);

  while (!((leftFrontDrive.get_position() < target + 2) && (leftFrontDrive.get_position() > target -2))){
    pros::delay(2);}
}


void turnLeft(double speed, double target){
  myChassis->setMaxVelocity(200);
  leftFrontDrive.tare_position();
  leftBackDrive.tare_position();
  rightBackDrive.tare_position();
  rightFrontDrive.tare_position();

  pros::delay(50);

  leftFrontDrive.move_absolute(-target, speed);
  leftBackDrive.move_absolute(-target, speed);
  rightBackDrive.move_absolute(target, speed);;
  rightFrontDrive.move_absolute(target, speed);

  while (!((rightFrontDrive.get_position() < target + 2) && (rightFrontDrive.get_position() > target -2))){
    pros::delay(2);}
}
