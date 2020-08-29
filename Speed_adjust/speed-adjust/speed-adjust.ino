#define S1 3 
#define S2 4 
#define S3 5
#define S4 6 
#define S5 7 
#define L1 8 
#define L2 9 
#define R1 12 
#define R2 13 
#define ENA 10 
#define ENB 11 



 
void setup()
{
  Serial.begin(9600);
  delay(150);
  pinMode(S1,INPUT);
  pinMode(S2,INPUT);
  pinMode(S3,INPUT);
  pinMode(S4,INPUT);
  pinMode(S5,INPUT);
  pinMode(L1,OUTPUT);
  pinMode(L2,OUTPUT);
  pinMode(R1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
 
}

void loop()
{

 analogWrite(10,250); 
 analogWrite(11,250);
  
  if(digitalRead(S1)==1&&digitalRead(S2)==1&&digitalRead(S3)==1&&digitalRead(S4)==1&&digitalRead(S5)==1)
  {
    forward();
  }
   if(digitalRead(S1)==1&&digitalRead(S2)==1&&digitalRead(S3)==1&&digitalRead(S4)==1&&digitalRead(S5)==0)
  {
    exleft();
  }
   if(digitalRead(S1)==1&&digitalRead(S2)==1&&digitalRead(S3)==1&&digitalRead(S4)==0&&digitalRead(S5)==0)
  {
    exleft();
  }
   if(digitalRead(S1)==1&&digitalRead(S2)==1&&digitalRead(S3)==0&&digitalRead(S4)==1&&digitalRead(S5)==1)
  {
    forward();
  }
   if(digitalRead(S1)==1&&digitalRead(S2)==1&&digitalRead(S3)==0&&digitalRead(S4)==0&&digitalRead(S5)==1)
  {
    forward();
  }
   if(digitalRead(S1)==1&&digitalRead(S2)==1&&digitalRead(S3)==0&&digitalRead(S4)==0&&digitalRead(S5)==0)
  {
    left();
  }
    if(digitalRead(S1)==1&&digitalRead(S2)==0&&digitalRead(S3)==0&&digitalRead(S4)==1&&digitalRead(S5)==1)
  {
    forward();
  }
   if(digitalRead(S1)==1&&digitalRead(S2)==0&&digitalRead(S3)==0&&digitalRead(S4)==0&&digitalRead(S5)==1)
  {
    forward();
  }
   if(digitalRead(S1)==1&&digitalRead(S2)==0&&digitalRead(S3)==0&&digitalRead(S4)==0&&digitalRead(S5)==0)
  {
    exleft();
  }
   if(digitalRead(S1)==0&&digitalRead(S2)==1&&digitalRead(S3)==1&&digitalRead(S4)==1&&digitalRead(S5)==1)
  {
    exright();
  }
   if(digitalRead(S1)==0&&digitalRead(S2)==1&&digitalRead(S3)==1&&digitalRead(S4)==1&&digitalRead(S5)==0)
  {
    forward();
  }
   if(digitalRead(S1)==0&&digitalRead(S2)==1&&digitalRead(S3)==1&&digitalRead(S4)==0&&digitalRead(S5)==0)
  {
    forward();
  }
   if(digitalRead(S1)==0&&digitalRead(S2)==1&&digitalRead(S3)==0&&digitalRead(S4)==0&&digitalRead(S5)==0)
  {
    forward();
  }
   if(digitalRead(S1)==0&&digitalRead(S2)==0&&digitalRead(S3)==1&&digitalRead(S4)==1&&digitalRead(S5)==1)
  {
    exright();
  }
   if(digitalRead(S1)==0&&digitalRead(S2)==0&&digitalRead(S3)==1&&digitalRead(S4)==1&&digitalRead(S5)==0)
  {
    forward();
  }
   if(digitalRead(S1)==0&&digitalRead(S2)==0&&digitalRead(S3)==1&&digitalRead(S4)==0&&digitalRead(S5)==0)
  {
    forward();
  }
  if(digitalRead(S1)==0&&digitalRead(S2)==0&&digitalRead(S3)==0&&digitalRead(S4)==1&&digitalRead(S5)==1)
  {
    right();
  }
  if(digitalRead(S1)==0&&digitalRead(S2)==0&&digitalRead(S3)==0&&digitalRead(S4)==1&&digitalRead(S5)==0)
  {
    forward();
  }
  if(digitalRead(S1)==0&&digitalRead(S2)==0&&digitalRead(S3)==0&&digitalRead(S4)==0&&digitalRead(S5)==1)
  {
    exright();
  }
  if(digitalRead(S1)==0&&digitalRead(S2)==0&&digitalRead(S3)==0&&digitalRead(S4)==0&&digitalRead(S5)==0)
  {
    right();
  }
}
void forward()
{
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);
}
void right()
{
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(R2,LOW);
}
void left()
{
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);
}
void exright()
{
  digitalWrite(L1,HIGH);
  digitalWrite(L2,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(R2,HIGH);
}
void exleft()
{
  digitalWrite(L1,LOW);
  digitalWrite(L2,HIGH);
  digitalWrite(R1,HIGH);
  digitalWrite(R2,LOW);
}
  
