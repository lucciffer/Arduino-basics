
void setup() //to setup or configure all the input,output pins and the declarations
{
  pinMode(8, OUTPUT);   //configure pin 8 as OUTPUT
  //pinMode is a pre-defined function, that takes two input parameters primarily, one being the pin number, the second being the mode of operation, i.e., INPUT or OUTPUT
  //NOTE: OUTPUT/INPUT are supposed to be written in upper case letters with no spaces in between
}

void loop()  //function to perform the operations
{
  digitalWrite(8, HIGH); //digitalWrite is the pre-defined function that writes a value/voltage to the digital pins of the arduino.
  //digitalWrite also takes two parameters, one being the digital pin number, adn the digital value being HIGH/LOW,
  // HIGH being ON and LOW being OFF
  //HIGH corresponding to digital 1 and LOW corresponding to digital 0
  
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(8, LOW);    //creates a delay of 1000microseconds(1second)
  delay(1000); // Wait for 1000 millisecond(s)
}

//Basic Algorithm:
// 1. Set digital pin 8 as OUTPUT
// 2. Send digital high on pin 8 to turn on the LED
// 3. wait for 1 second(delay)
// 4. send digital low on pin 8 to turn off the LED
// 5. wait for 1 second(delay)
// 6. repeat untill power is removed
