int sensorPin = A0; // select the input pin for LDR

int sensorValue = 0;// variable to store the value coming from the sensor
int redPin= 9;
int greenPin = 10;
int bluePin = 11;


void setup() {
 pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
Serial.begin(9600); //sets serial port for communication

}
void loop() {
 // setColor(180,255,125);//indigo
 //setColor(107,255,44);//violet
 //setColor(180,255,125);//indigo
 //setColor(255,255,0);//blue
 setColor(0,0,0);//white
 delay(10000);
 
  //setColor(255,0,255);//green 
 // delay(5000);
 // setColor(0,0,255);//yellow
  //delay(5000);
 // setColor(0,128,255);//orange
 //delay(5000);
 //setColor(0,255,255);//red
 //delay(5000);
  int sum=0;
  int res=0;
  int i=1;
  while(i<100)
  {
sensorValue =analogRead(sensorPin); // read the value from the sensor//
  //sum=sum+sensorValue;
  i=i+1;
  delay(100);
  
}
 //res=sum/10;
Serial.print("Phosporus Available (kg/ha): "); //prints the values coming from the sensor on the screen

res =  ((1024-sensorValue) - 343.32)/(1.4989);
Serial.print(res*1.5);
Serial.println('\n');
digitalWrite(3, HIGH);

}
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
