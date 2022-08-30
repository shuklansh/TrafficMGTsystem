int GREEN=9;
int YELLOW=10;
int RED=11;
void setup()
{
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}
void loop()
{
  
  digitalWrite(GREEN,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(RED,HIGH);
  delay(3000); //wait for 2 sec


  digitalWrite(GREEN,LOW);
  digitalWrite(YELLOW,HIGH);
  digitalWrite(RED,LOW);
  delay(3000); //wait for 2 sec
    
  digitalWrite(GREEN,HIGH);
  digitalWrite(YELLOW,LOW);
  digitalWrite(RED,LOW);
  delay(3000); //wait for 1 sec
  
}
