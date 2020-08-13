int red_led= 11;  //store 11 value in variable named 'red_led'
int green_led = 10;  //store 10 value in variable named 'green_led'
int blue_led = 9; //store 9 value in variable named 'blue_led'
void setup()  
{
  pinMode(red_led, OUTPUT);  //configuring red_led pin (digital pin 11, because red_led has value 11) to OUTPUT
  pinMode(green_led, OUTPUT); //configuring green_led pin (digital pin 10, because green_led has value 10) to OUTPUT
  pinMode(blue_led, OUTPUT); //configuring blue_led pin (digital pin 9, because blue_led has value 9) to OUTPUT
}
void loop() {
  RGB_color(255, 0, 0); // Red
  delay(1000);
  RGB_color(0, 255, 0); // Green
  delay(1000);
  RGB_color(0, 0, 255); // Blue
  delay(1000);
 
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_led, red_light_value);
  analogWrite(green_led, green_light_value);
  analogWrite(blue_led, blue_light_value);
}
