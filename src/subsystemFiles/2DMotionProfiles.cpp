#include "main.h"

//2D Motion Profiling Drive Train Set Up
std::shared_ptr<ChassisController> myChassis =
  ChassisControllerBuilder()
    .withMotors({1, 19},{17, 13})//      LF|LB   RF|RB
    .withDimensions(AbstractMotor::gearset::green, {{4_in, 12_in}, imev5GreenTPR})
    .build();


//Build Drive Train Eat Profile
std::shared_ptr<AsyncMotionProfileController> eatProfile =
  AsyncMotionProfileControllerBuilder()
    .withLimits({
      .5,//Max Velocity .333
      2.5,//Max Acceleration
      10,//JERKY
    })
    .withOutput(myChassis)
    .buildMotionProfileController();


//Build Drive Train Fast Profile
std::shared_ptr<AsyncMotionProfileController> fastProfile =
  AsyncMotionProfileControllerBuilder()
    .withLimits({
      1.0,//Max Velocity .4
      1.8,//Max Acceleration
      10,//JERKY
    })
    .withOutput(myChassis)
    .buildMotionProfileController();


    //Build Drive Train medium Profile
    std::shared_ptr<AsyncMotionProfileController> mediumProfile =
      AsyncMotionProfileControllerBuilder()
        .withLimits({
          0.68,//Max Velocity .4534
          1.0,//Max Acceleration
          10,//JERKY
        })
        .withOutput(myChassis)
        .buildMotionProfileController();


//Build Drive Train Slow Profile
std::shared_ptr<AsyncMotionProfileController> slowProfile =
  AsyncMotionProfileControllerBuilder()
    .withLimits({
      1.0,//Max Velocity .3334
      1.0,//Max Acceleration
      10,//JERKY
    })
    .withOutput(myChassis)
    .buildMotionProfileController();


//Build Drive Train Eat Profile
std::shared_ptr<AsyncMotionProfileController> oneProfile =
  AsyncMotionProfileControllerBuilder()
    .withLimits({
      .5,//Max Velocity
      1.0,//Max Acceleration
      10,//JERKY
    })
    .withOutput(myChassis)
    .buildMotionProfileController();
