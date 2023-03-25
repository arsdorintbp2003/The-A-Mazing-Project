//#define RGBWait 200
//#define LDRWait 10 //in milliseconds 
//#define LDR 0
//#define LED 13
//
//int PIN_A = 8;
//int PIN_B = 7;
//int PIN_G = 4;
//
//float colourArray[] = {0,0,0};
//float whiteArray[] = {847,827,828};
//float blackArray[] = {571,572,572};
//float greyDiff[] = {276,255,256};
//
//char colourStr[3][5] = {"R = ", "G = ", "B = "};
//
//void redlight(){
//  digitalWrite(PIN_G, LOW);
//  digitalWrite(PIN_B, HIGH);
//  digitalWrite(PIN_A, LOW);   
//}
//void greenlight(){
//  digitalWrite(PIN_G, LOW);
//  digitalWrite(PIN_B, LOW);
//  digitalWrite(PIN_A, HIGH);  
//}
//void bluelight(){
//  digitalWrite(PIN_G, LOW);
//  digitalWrite(PIN_B, LOW);
//  digitalWrite(PIN_A, LOW);  
//}
//
//
//void turn_on(char color){
//  digitalWrite(PIN_G, LOW);
//  if(color == 'R'){ //low Y2
//    digitalWrite(PIN_B, HIGH);
//    digitalWrite(PIN_A, LOW);   
//  }
//  if(color == 'G'){ //low Y1
//    digitalWrite(PIN_B, LOW);
//    digitalWrite(PIN_A, HIGH);
//  }
//  if(color == 'B'){ //low Y0  
//    digitalWrite(PIN_B, LOW);
//    digitalWrite(PIN_A, LOW);
//  }   
//}
//
//void turn_off(){
//  digitalWrite(PIN_G, HIGH);
//}
//
//void setup() {
//  pinMode(PIN_A, OUTPUT);
//  pinMode(PIN_B, OUTPUT);
//  pinMode(PIN_G, OUTPUT);
//  turn_off();
//  for(int c = 0;c<=2;c++){
//    pinMode(ledArray[c],OUTPUT);  
//  }
//  pinMode(LED,OUTPUT);   //Check Indicator -- OFF during Calibration
//
//  //begin serial communication
//  Serial.begin(9600);
//  
//  setBalance();
//  digitalWrite(LED, HIGH);
//}
//
//void loop() {
//  for(int c = 0;c<=2;c++){    
//    Serial.print(colourStr[c]);
//    turn_on(ledArray[c]); //turn ON the LED, red, green or blue, one colour at a time.
//    delay(RGBWait);
////get the average of 5 consecutive readings for the current colour and return an average 
//    colourArray[c] = getAvgReading(5);
////the average reading returned minus the lowest value divided by the maximum possible range, multiplied by 255 will give a value between 0-255, representing the value for the current reflectivity (i.e. the colour LDR is exposed to)
//    colourArray[c] = (colourArray[c] - blackArray[c])/(greyDiff[c])*255;
//    turn_off();  //turn off the current LED colour
//    delay(RGBWait);
//    Serial.println(int(colourArray[c])); //show the value for the current colour LED, which corresponds to either the R, G or B of the RGB code
//  }
//} 
//
//
//
//int getAvgReading(int times){      
////find the average reading for the requested number of times of scanning LDR
//  int reading;
//  int total = 0;
////take the reading as many times as requested and add them up
//  for(int i = 0;i < times;i++){
//     reading = analogRead(LDR);
//     total = reading + total;
//     delay(LDRWait);
//  }
////calculate the average and return it
//  return total/times;
//}
