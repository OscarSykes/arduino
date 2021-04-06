int LED1=2;
int LED2=3;
int LED3=4;
int LED4=5;
int LED5=6;
int LED6=7;
void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
}

void loop()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED6, HIGH);
  delay(1000); 
  digitalWrite(LED1, LOW);
  digitalWrite(LED6, LOW);
  delay(1000);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED5, HIGH);
  delay(1000); 
  digitalWrite(LED2, LOW);
  digitalWrite(LED5, LOW);
  delay(1000); 
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  delay(1000); 
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  delay(1000); 
  
}
