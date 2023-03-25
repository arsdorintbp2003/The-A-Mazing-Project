//#include <MeMCore.h>
//
//MeDCMotor motor1 (M1); //right forward positive
//MeDCMotor motor2 (M2); //left forward negative
//MeUltrasonicSensor ultrasonic (PORT_2);
//MeLineFollower lineFinder (PORT_1);
//MeBuzzer buzzer;
//
//#define turnTime 500 //need to measure approximate time when battery is fully charged and change the value
//#define runTime 500 //need to measure approximate time when battery is fully charged and change the value
//#define motorSpeed 255
//
//const int c = 261;
//const int d = 294;
//const int e = 329;
//const int f = 349;
//const int g = 391;
//const int gS = 415;
//const int a = 440;
//const int aS = 455;
//const int b = 466;
//const int cH = 523;
//const int cSH = 554;
//const int dH = 587;
//const int dSH = 622;
//const int eH = 659;
//const int fH = 698;
//const int fSH = 740;
//const int gH = 784;
//const int gSH = 830;
//const int aH = 880;
//
//void findLine() {
//  int sensorState = lineFinder.readSensors();
//  switch (sensorState)
//  {
//    case S1_IN_S2_IN: motor1.stop(); motor2.stop(); playSong(); break;
//    case S1_IN_S2_OUT: motor1.stop(); motor2.run(-motorSpeed); break; //need to check the direction
//    case S1_OUT_S2_IN: motor1.run(motorSpeed); motor2.stop(); break;
//    case S1_OUT_S2_OUT: motor1.run(motorSpeed); motor2.run(-motorSpeed);
//    default: break;
//  }
//}
//
//void turnRight() { //Right-turn
//  motor1.stop();
//  motor2.run(-motorSpeed);
//  delay(turnTime); 
//  motor2.stop();
//}
//
//void turnLeft () { //Left-turn
//  motor1.run(motorSpeed);
//  motor2.stop();
//  delay(turnTime); 
//  motor1.stop();
//}
//
//void turn180 () { //180 degree turn within the same grid
//  motor1.run(motorSpeed);
//  motor2.run(motorSpeed);
//  delay(turnTime);
//}
//
//void turnLeftTwo () { //Two successive left-turns in two grids
//  turnLeft();
//  motor1.run(motorSpeed);
//  motor2.run(-motorSpeed);
//  delay(runTime);
//  turnLeft();
//}
//
//void turnRightTwo () { //Two successive right-turns in two grids
//  turnRight();
//  motor1.run(motorSpeed);
//  motor2.run(-motorSpeed);
//  delay(runTime);
//  turnRight();
//}
//
///*
//void readSign() { //read sign using light sensor
//  switch (//color)
//  {
//    case red: left turn;
//    case green: right turn;
//    case orange: 180 degree turn;
//    case purple: two successive left turns
//    case light blue: two successive right turns
//    case white: motor1.stop(); motor2.stop(); playSong(); break;
//    default: break;
//  }
//}
//
//void distFromWall() {
//  int dist = ultrasonic.distanceCm();
//  switch (dist)
//  {
//    case
//  }
//}
//*/
//void playSong() { //Star Wars OST
// 
//  //Play first section
//  firstSection();
// 
//  //Play second section
//  secondSection();
// 
//  //Variant 1
//  buzzer.tone(f, 250);  
//  buzzer.tone(gS, 500);  
//  buzzer.tone(f, 350);  
//  buzzer.tone(a, 125);
//  buzzer.tone(cH, 500);
//  buzzer.tone(a, 375);  
//  buzzer.tone(cH, 125);
//  buzzer.tone(eH, 650);
// 
//  delay(500);
// 
//  //Repeat second section
//  secondSection();
// 
//  //Variant 2
//  buzzer.tone(f, 250);  
//  buzzer.tone(gS, 500);  
//  buzzer.tone(f, 375);  
//  buzzer.tone(cH, 125);
//  buzzer.tone(a, 500);  
//  buzzer.tone(f, 375);  
//  buzzer.tone(cH, 125);
//  buzzer.tone(a, 650);  
// 
//  delay(650);
//}
// 
//void firstSection() {
//  buzzer.tone(a, 500);
//  buzzer.tone(a, 500);    
//  buzzer.tone(a, 500);
//  buzzer.tone(f, 350);
//  buzzer.tone(cH, 150);  
//  buzzer.tone(a, 500);
//  buzzer.tone(f, 350);
//  buzzer.tone(cH, 150);
//  buzzer.tone(a, 650);
// 
//  delay(500);
// 
//  buzzer.tone(eH, 500);
//  buzzer.tone(eH, 500);
//  buzzer.tone(eH, 500);  
//  buzzer.tone(fH, 350);
//  buzzer.tone(cH, 150);
//  buzzer.tone(gS, 500);
//  buzzer.tone(f, 350);
//  buzzer.tone(cH, 150);
//  buzzer.tone(a, 650);
// 
//  delay(500);
//}
// 
//void secondSection() {
//  buzzer.tone(aH, 500);
//  buzzer.tone(a, 300);
//  buzzer.tone(a, 150);
//  buzzer.tone(aH, 500);
//  buzzer.tone(gSH, 325);
//  buzzer.tone(gH, 175);
//  buzzer.tone(fSH, 125);
//  buzzer.tone(fH, 125);    
//  buzzer.tone(fSH, 250);
// 
//  delay(325);
// 
//  buzzer.tone(aS, 250);
//  buzzer.tone(dSH, 500);
//  buzzer.tone(dH, 325);  
//  buzzer.tone(cSH, 175);  
//  buzzer.tone(cH, 125);  
//  buzzer.tone(b, 125);  
//  buzzer.tone(cH, 250);  
// 
//  delay(350);
//}
//
//void setup() {
//  Serial.begin(9600);
//}
//
//void loop() {
//  findLine();
//}
