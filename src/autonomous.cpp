#include "main.h"

//Cool Gui link:https://github.com/kunwarsahni01/Vex-Autonomous-Selector

//Autonomous Period
void autonomous(){
  /*
  mediumProfile->setTarget("Back Up From Stack Skills", true);
  mediumProfile->waitUntilSettled();

  turnRight(50,319);

  pros::delay(200);

  intake();

  mediumProfile->setTarget("1st Tower Eat");
  mediumProfile->waitUntilSettled();
*/


//Blue Unprotected Zone Auton
  if(autonSelection  == 1){

    deploy();

    intake();

    eatProfile->setTarget("Eat Cubes");
    eatProfile->waitUntilSettled();

    pros::delay(1000);

    intakeStop();

    fastProfile->setTarget("Back Up", true);
    fastProfile->waitUntilSettled();

    pros::delay(200);

    turnLeft(50, 340);

    pros::delay(250);


    mediumProfile->setTarget("Move to Score");
    mediumProfile->waitUntilSettled();


    stackCubes();

    fastProfile->setTarget("Just A Little");
    fastProfile->waitUntilSettled();

    fastProfile->setTarget("Back Up From Stack", true);
    fastProfile->waitUntilSettled();

    myChassis->setMaxVelocity(200);

  }



//Red Unprotected Zone Autonomous
  if(autonSelection  == 2){

    deploy();

    intake();

    eatProfile->setTarget("Eat Cubes");
    eatProfile->waitUntilSettled();

    pros::delay(1000);

    intakeStop();

    fastProfile->setTarget("Back Up", true);
    fastProfile->waitUntilSettled();

    pros::delay(200);

    turnRight(50, 340);

    pros::delay(250);


    mediumProfile->setTarget("Move to Score");
    mediumProfile->waitUntilSettled();


    stackCubes();

    fastProfile->setTarget("Just A Little");
    fastProfile->waitUntilSettled();

    fastProfile->setTarget("Back Up From Stack", true);
    fastProfile->waitUntilSettled();

    myChassis->setMaxVelocity(200);
}


//Blue Protected Zone Autonomous
  if(autonSelection  == 3){

    deploy();

    intake();

    slowProfile->setTarget("Eat 1");
    slowProfile->waitUntilSettled();

    turnLeft(50, 230);

    slowProfile->setTarget("Eat 2");
    slowProfile->waitUntilSettled();

    slowProfile->setTarget("Eat 2", true);
    slowProfile->waitUntilSettled();

    intakeStop();

    turnLeft(50,320);

    mediumProfile->setTarget("Score");
    mediumProfile->waitUntilSettled();

    stackCubes();

    fastProfile->setTarget("Just A Little");
    fastProfile->waitUntilSettled();

    fastProfile->setTarget("Move to Score", true);
    fastProfile->waitUntilSettled();

    fastProfile->setTarget("Back Up From Stack", true);
    fastProfile->waitUntilSettled();

    myChassis->setMaxVelocity(200);

}


//Red Protected Zone Autonomous
  if(autonSelection  == 4){
    deploy();

    intake();

    slowProfile->setTarget("Eat 1");
    slowProfile->waitUntilSettled();

    turnRight(50, 230);

    slowProfile->setTarget("Eat 2");
    slowProfile->waitUntilSettled();

    slowProfile->setTarget("Eat 2", true);
    slowProfile->waitUntilSettled();

    intakeStop();

    turnRight(50,320);

    mediumProfile->setTarget("Score");
    mediumProfile->waitUntilSettled();

    stackCubes();

    fastProfile->setTarget("Just A Little");
    fastProfile->waitUntilSettled();

    fastProfile->setTarget("Move to Score", true);
    fastProfile->waitUntilSettled();

    fastProfile->setTarget("Back Up From Stack", true);
    fastProfile->waitUntilSettled();

    myChassis->setMaxVelocity(200);
}


//1 Cube Autonomous (JUST IN CASE EVERYTHING DIES)
  if(autonSelection  == 5){
    oneProfile->setTarget("1 Cube", true);
    oneProfile->waitUntilSettled();

    deploy();
  }


//autonSelection ing Skills Autonomous
  if(autonSelection  == 6){
    deploy();

    intake();

    eatProfile->setTarget("Eat L Cubes");
    eatProfile->waitUntilSettled();

    turnRight(50,165);

    intakeStop();

    fastProfile->setTarget("Align With Line", true);
    fastProfile->waitUntilSettled();

    turnLeft(50,139);

    intake();

    eatProfile->setTarget("Eat Line Cubes");
    eatProfile->waitUntilSettled();

    fastProfile->setTarget("Back Up", true);
    fastProfile->waitUntilSettled();

    turnLeft(50, 348);

    trayMotor.move_absolute(280, 200);
    leftIntakeMotor.move_absolute(50, 50);
    leftIntakeMotor.move_absolute(50, 50);

    mediumProfile->setTarget("Move to Score");
    mediumProfile->waitUntilSettled();

    stackCubes();

    //fastProfile->setTarget("Just A Little");
    //fastProfile->waitUntilSettled();

    fastProfile->setTarget("Back Up From Stack", true);
    fastProfile->waitUntilSettled();

    myChassis->setMaxVelocity(200);
  }

}
