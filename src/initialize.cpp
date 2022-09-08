#include "main.h"


//When the Robot first turns on
void initialize(){
  selectorInit();

  //Generates 2D Motion Profiling Paths
  eatProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {41.69_in, 0_ft, 0_deg}},//42
    "Eat Cubes");

  fastProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {19_in, 0_ft, 0_deg}},
    "Back Up");

  mediumProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {17_in, 0_ft, 0_deg}},
    "Move to Score");

  fastProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {4_in, 0_ft, 0_deg}},
    "Just A Little");

    fastProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {20_in, 0_ft, 0_deg}},
    "Back Up From Stack");
////////////////////////////////////////////////////////////////////////////////
  slowProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {22_in, 0_ft, 0_deg}},
    "Eat 1");

  slowProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {28_in, 0_ft, 0_deg}},
    "Eat 2");

  slowProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {10_in, 0_ft, 0_deg}},
    "Score");
////////////////////////////////////////////////////////////////////////////////
  oneProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {7_in, 0_ft, 0_deg}},
    "1 Cube");

////////////////////////////////////////////////////////////////////////////////
  eatProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {27_in, 0_ft, 0_deg}},//42
    "Eat L Cubes");

    fastProfile->generatePath({
    {0_ft, 0_ft, 0_deg},
    {28.5_in, 0_ft, 0_deg}},
    "Align With Line");

    eatProfile->generatePath({
      {0_ft, 0_ft, 0_deg},
      {33_in, 0_ft, 0_deg}},//42
      "Eat Line Cubes");
////////////////////////////////////////////////////////////////////////////////


    mediumProfile->generatePath({
      {0_ft, 0_ft, 0_deg},
      {10_in, 0_ft, 0_deg}},//42
      "Back Up From Stack Skills");

      mediumProfile->generatePath({
      {0_ft, 0_ft, 0_deg},
      {30_in, 0_ft, 0_deg}},
      "1st Tower Eat");


      mediumProfile->generatePath({
        {0_ft, 0_ft, 0_deg},
        {10_in, 0_ft, 0_deg}},//42
        "Score");







	leftFrontDrive.set_brake_mode(MOTOR_BRAKE_BRAKE);//Sets the Drive Train brake mode to BRAKE just in case at TSA the competition mats are set up wrong(incident last year)
  leftBackDrive.set_brake_mode(MOTOR_BRAKE_BRAKE);
  rightBackDrive.set_brake_mode(MOTOR_BRAKE_BRAKE);
  rightFrontDrive.set_brake_mode(MOTOR_BRAKE_BRAKE);}

void disabled(){}
void competition_initialize(){}
