const int SensorInput = A3;
const int OnValue = 0;
const int Baseline = 0; //Originally Calibrated at base value of 65: replace with baseline at each time  
const int MyoWareThreshValue_1 = 25+Baseline;       
const int MyoWareThreshValue_2 = 45+Baseline;
const int MyoWareThreshValue_3 = 52+Baseline;
const int MyoWareThreshValue_4 = 60+Baseline;
const int MyoWareThreshValue_5 = 75+Baseline;
const int MyoWareThreshValue_6 = 80+Baseline;
const int MyoWareThreshValue_7 = 90+Baseline;
const int MyoWareThreshValue_8 = 95+Baseline;
const int MyoWareThreshValue_9 = 100+Baseline;
const int MyoWareThreshValue_10 = 105+Baseline;

int LED13 = 13;
int LED12 = 12;
int LED11 = 11;
int LED10 = 10;
int LED9 = 9;
int LED8 = 8;
int LED7 = 7;
int LED6 = 6;
int LED5 = 5;
int LED4 = 4;
int LED3 = 3;

void setup() {
Serial.begin(115200);
pinMode(LED13,OUTPUT);
pinMode(LED12,OUTPUT);
pinMode(LED11,OUTPUT);
pinMode(LED10,OUTPUT);
pinMode(LED9,OUTPUT);
pinMode(LED8,OUTPUT);
pinMode(LED7,OUTPUT);
pinMode(LED6,OUTPUT);
pinMode(LED5,OUTPUT);
pinMode(LED4,OUTPUT);
pinMode(LED3,OUTPUT);
}

void loop() {
 
int sensorValue = analogRead(SensorInput);

Serial.println(sensorValue);
delay(10);

if(sensorValue > MyoWareThreshValue_1){
  digitalWrite(LED13,HIGH);
}else{
  digitalWrite(LED13,LOW);
}

if(sensorValue > MyoWareThreshValue_2){
  digitalWrite(LED12,HIGH);
}else{
  digitalWrite(LED12,LOW);
}

if(sensorValue > MyoWareThreshValue_3){
  digitalWrite(LED11,HIGH);
}else{
  digitalWrite(LED11,LOW);
}

if(sensorValue > MyoWareThreshValue_4){
  digitalWrite(LED10,HIGH);
}else{
  digitalWrite(LED10,LOW);
}

if(sensorValue > MyoWareThreshValue_5){
  digitalWrite(LED9,HIGH);
}else{
  digitalWrite(LED9,LOW);
}

if(sensorValue > MyoWareThreshValue_6){
  digitalWrite(LED8,HIGH);
}else{
  digitalWrite(LED8,LOW);
}

if(sensorValue > MyoWareThreshValue_7){
  digitalWrite(LED7,HIGH);
}else{
  digitalWrite(LED7,LOW);
}

if(sensorValue > MyoWareThreshValue_8){
  digitalWrite(LED6,HIGH);
}else{
  digitalWrite(LED6,LOW);
}

if(sensorValue > MyoWareThreshValue_9){
  digitalWrite(LED5,HIGH);
}else{
  digitalWrite(LED5,LOW);
}

if(sensorValue > MyoWareThreshValue_10){
  digitalWrite(LED4,HIGH);
}else{
  digitalWrite(LED4,LOW);
}

if(sensorValue > OnValue){
  digitalWrite(LED3,HIGH);
}else{
  digitalWrite(LED3,LOW);
}

delay(1);
}
