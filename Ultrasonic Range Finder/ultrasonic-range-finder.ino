#define trigPin 9 //global definition of trigger pin to pin 9
#define echoPin 10 //global definition of echo pin to pin 10

void setup() {
  Serial.begin (9600); //establishing serial communication at 9600 baud rate
  pinMode(trigPin, OUTPUT); //configuring pin 9 i.e., trigPin to OUTPUT
  pinMode(echoPin, INPUT); //configuring ping 10 i.e., echoPin to OUTPUT
}

void loop() {
  float duration, distance; //variable declaration
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  //by wiriting the voltages as per the above lines, we are sending a burst of ultrasonic signals from the transmitter of the ultrasonic sensor
  duration = pulseIn(echoPin, HIGH);  //pulseInis the function, that calculates incoming pulse on the defined pin, i.e., it waits for the pin to go HIGH, then it starts the counter and when goes LOW, stops again
  
  //pulseIn returns the value in terms of microseconds or 0 depending on the incoming pulse
  distance = (duration / 2) * 0.0344; //this formula is used to calculate the distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  delay(1000);
 
}
