const int trigPin = 12;
const int echoPin = 13;

const int LED1 = A0;
const int LED2 = A1;
const int LED3 = A2;
const int LED4 = A3;
const int LED5 = A4;
const int LED6 = A5;
const int LED7 = 2;

int duration = 0;
int distance = 0;

void setup() 
{
  pinMode(trigPin , OUTPUT);
  pinMode(echoPin , INPUT);
  
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
  
  Serial.begin(9600);

}

void loop()
{
 digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;

  // if ( distance <= 30 )
  // {
    
  // }
  // else
  // {
    
  //  // digitalWrite(LED1, LOW);
  // }
  if ( distance <= 14 )
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
  if ( distance <= 18 )
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
  if ( distance <= 15 )
  {
    digitalWrite(LED4, HIGH);
  }
  else
  {
    // delay(1000);
    digitalWrite(LED1, LOW);
    digitalWrite(LED4, LOW);
  }
  if ( distance <= 22 )
  {
    digitalWrite(LED5, HIGH);
  }
  else
  {
    //delay(1500);
    digitalWrite(LED5, LOW);
  }
  if ( distance <= 30 )
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED6, HIGH);
  }
  else
  {
   // delay(1500);
    digitalWrite(LED6, LOW);
  }
  if ( distance <= 49 )
  {
    digitalWrite(LED7, HIGH);
  }
  else
  {
    digitalWrite(LED7, LOW);
  }
  delay(100);
}
