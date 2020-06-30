int p1=A5;
int p2=A4;
//int laststate;
void setup()
{
  pinMode(A5, INPUT);
  pinMode(A4, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  
 
}

void loop()
{
  //state=digitalRead(12);
 
  p1=analogRead(A5);
  p2=analogRead(A4);
  
  
  if (p1>511 && p2>511)
  {
  analogWrite(3, p2);
  delay(100); // Use delay if needed
  analogWrite(5, 0);
  delay(100); // Use delay if needed
   analogWrite(6, p1);
  delay(100); // Use delay if needed
  analogWrite(9, 0);
  delay(100); // Use delay if needed
  }
  
  if (p1<511 && p2<511)
    
  {
    analogWrite(3, 0);
  delay(100); // Use delay if needed
  analogWrite(5, 1023-p2);
  delay(100); // Use delay if needed
   analogWrite(6, 0);
  delay(100); // Use delay if needed
  analogWrite(9, 1023-p1);
  delay(100); // Use delay if needed  
  
 

  }
    
  if (p1>511 && p2<511)
    
  {
    analogWrite(3, 0);
  delay(100); // Use delay if needed
  analogWrite(5, 1023-p2);
  delay(100); // Use delay if needed
   analogWrite(6, p1);
  delay(100); // Use delay if needed
  analogWrite(9, 0);
  delay(100); // Use delay if needed  
  
 

  }
 
  if (p1<511 && p2>511)
    
  {
    analogWrite(3, p2);
  delay(100); // Use delay if needed
  analogWrite(5, 0);
  delay(100); // Use delay if needed
   analogWrite(6, 0);
  delay(100); // Use delay if needed
  analogWrite(9, 1023-p1);
  delay(100); // Use delay if needed  
  
 

  }
    if (p1==511 && p2<511)
    
  {
    analogWrite(3, 0);
  delay(100); // Use delay if needed
  analogWrite(5,1023-p2);
  delay(100); // Use delay if needed
   analogWrite(6, 0);
  delay(100); // Use delay if needed
  analogWrite(9, 0);
  delay(100); // Use delay if needed  
  
    }
  if (p1==511 && p2>511)
    
  {
    analogWrite(3, p2);
  delay(100); // Use delay if needed
  analogWrite(5, 0);
  delay(100); // Use delay if needed
   analogWrite(6, 0);
  delay(100); // Use delay if needed
  analogWrite(9, 0);
  delay(100); // Use delay if needed  
  }
  
  if (p1>511 && p2==511)
    
  {
    analogWrite(3, 0);
  delay(100); // Use delay if needed
  analogWrite(5, 0);
  delay(100); // Use delay if needed
   analogWrite(6, p1);
  delay(100); // Use delay if needed
  analogWrite(9, 0);
  delay(100); // Use delay if needed  
  
 

  }
  if (p1<511 && p2==511)
    
  {
    analogWrite(3,0);
  delay(100); // Use delay if needed
  analogWrite(5, 0);
  delay(100); // Use delay if needed
   analogWrite(6, 0);
  delay(100); // Use delay if needed
  analogWrite(9, 1023-p1);
  delay(100); // Use delay if needed  
  
 

  }
    if (p1==511 && p2==511)
    
  {
    analogWrite(3, 0);
  delay(100); // Use delay if needed
  analogWrite(5, 0);
  delay(100); // Use delay if needed
   analogWrite(6, 0);
  delay(100); // Use delay if needed
  analogWrite(9, 0);
  delay(100); // Use delay if needed  
  
 

  }
}