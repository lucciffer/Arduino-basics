int baselineTemp = 0; //base temperature value for C to F conversion
 
int celsius = 0;  //celcuis values
 
int fahrenheit = 0;  //fahrenheit values

void setup()
{
  pinMode(A0, INPUT); //Analog pin for sensor in tinkercad only.
  //for DHT11 sensor, use any digital pin, to record temperatures.
  Serial.begin(9600); //initialize serial communication at 9600 baud rate

}

void loop()
{
  // set threshold temperature to activate LEDs
  baselineTemp = 40;
  // measure temperature in Celsius
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
  // convert to Fahrenheit
  fahrenheit = ((celsius * 9) / 5 + 32);
  Serial.print(celsius);
  Serial.print(" C, ");
  Serial.print(fahrenheit);
  Serial.println(" F");
  
  delay(1000); // Wait for 1000 millisecond(s)
}
