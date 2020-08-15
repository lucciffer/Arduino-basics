#include <IRremote.h>

int RECV_PIN = 10;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  Serial.begin(9600);
  // In case the interrupt driver crashes on setup, give a clue
  // to the user what's going on.
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
  pinMode(12,OUTPUT);
}


void loop() 
{
  if (irrecv.decode(&results)) 
  {
    Serial.println(results.value, DEC);
    if(results.value == 16582903) //if input is 1 turn on LED
    {
     digitalWrite(12,HIGH); 
    }
    if(results.value == 16593103) //if input is 0 turn off LED
    {
      digitalWrite(12,LOW);
    }
    irrecv.resume(); // Receive thxt value
  }
  delay(100);
}
    