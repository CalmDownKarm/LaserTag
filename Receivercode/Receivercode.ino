int sensorval = 0;
int lives=0;
void setup(){
  pinMode(A0, INPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  sensorval=analogRead(A0);
  lives=10; 
}

void loop(){
  int val = analogRead(A0);
  
  if(val >= sensorval+50)
  {
    digitalWrite(12, HIGH);
     lives--;
   }
   else
     digitalWrite(12, LOW);
   if(!lives)
     digitalWrite(11, HIGH);
   
   delay(10);
}
