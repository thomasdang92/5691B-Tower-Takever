#include "main.h"

//User Control Lift Code
void lift(void*){
	int done = true;

  while(true){

		if(Chris.get_digital(DIGITAL_LEFT)){
			done = false;}

		if(fabs(liftMotor.get_position() <= 0) || Chris.get_digital(DIGITAL_L1) || Chris.get_digital(DIGITAL_L2)){
			done = true;}

    if(Chris.get_digital(DIGITAL_L1)){
				liftMotor.move_voltage(12000);}

		else if(Chris.get_digital(DIGITAL_L2)){
				liftMotor.move_voltage(-12000);}

		else if(done == false){
				liftMotor.move_voltage(-12000);}

		else{
				liftMotor.set_brake_mode(MOTOR_BRAKE_BRAKE);
				liftMotor.move_voltage(0);}

		pros::delay(10);
	}
}


//Autonomous Period Lift Code
void deploy(){
  trayMotor.set_zero_position(0);
  int target = 400;//500
  liftMotor.tare_position();

  liftMotor.move_absolute(target, 100);

  while (!(liftMotor.get_position() >= target)){
    pros::delay(2);}
	leftIntakeMotor.move_voltage(-12000);
	rightIntakeMotor.move_voltage(-12000);
  liftMotor.move_absolute(0, 100);

  while (!(liftMotor.get_position() <= 0)){
    pros::delay(2);}

	pros::delay(500);//300
}


void liftMidTower(){
	liftMotor.move_absolute(680, 100);
	while (!(liftMotor.get_position() >= 680)){
		pros::delay(2);}
}


void liftLowTower(){
	liftMotor.move_absolute(300, 100);
	while (!(liftMotor.get_position() >= 300)){
		pros::delay(2);}
}


void liftReset(){
	liftMotor.move_absolute(0, 100);
	while (!(liftMotor.get_position() <= 0)){
		pros::delay(2);}
}
