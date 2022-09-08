#include "main.h"

//leftIntakeMotor.move_voltage(trayMotor.get_position()*-12);
//rightIntakeMotor.move_voltage(trayMotor.get_position()*-12);



//User Control Tray Code
void tray(void*){
	int done = true;
	double kP = 20.45;//28.5     20.45
	int target = 747;//746

	while(true){

		if(tilterStop.get_value()){
			trayMotor.set_zero_position(746);}

		if(Chris.get_digital(DIGITAL_LEFT)){
			done = false;}

		if(fabs(trayMotor.get_position() <= 0) || Chris.get_digital(DIGITAL_UP) || Chris.get_digital(DIGITAL_DOWN)){
			done = true;}

		if(Chris.get_digital(DIGITAL_UP)){

			if(trayMotor.get_position() < 350){
			leftIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
			rightIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
			int error = target - trayMotor.get_position();
			std::cout << error * kP + 2000 << std::endl;
			trayMotor.move_voltage(error * kP + 5000);}

			else{
				leftIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
				rightIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
				int error = target - trayMotor.get_position();
				std::cout << error * kP + 2000 << std::endl;
				trayMotor.move_voltage(error * kP + 2000);
				leftIntakeMotor.move_voltage(-8000);
				rightIntakeMotor.move_voltage(-8000);}
}

		else if(Chris.get_digital(DIGITAL_DOWN)){
			leftIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
			rightIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
			trayMotor.move_voltage(-12000);}

		else if(done == false){
			leftIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
			rightIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
			trayMotor.move_voltage(-12000);}

		else{
			trayMotor.set_brake_mode(MOTOR_BRAKE_BRAKE);
			trayMotor.move_voltage(0);}

		pros::delay(10);}
}


//Autonomous Period Tray Code
void stackCubes(){
  leftIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
  rightIntakeMotor.set_brake_mode(MOTOR_BRAKE_COAST);
  double kP = 16;//24
  int target = 750;//746

  while((!tilterStop.get_value())){
		leftIntakeMotor.move_voltage(-4000);
		rightIntakeMotor.move_voltage(-4000);

    int error = target - trayMotor.get_position();
    trayMotor.move_voltage((error * kP)+3000);
    std::cout << tilterStop.get_value() << std::endl;}

  trayMotor.set_brake_mode(MOTOR_BRAKE_BRAKE);
  trayMotor.move_voltage(0);
  leftIntakeMotor.move_voltage(0);
  rightIntakeMotor.move_voltage(0);
}
