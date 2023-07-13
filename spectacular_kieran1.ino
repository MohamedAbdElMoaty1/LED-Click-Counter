int button = 8 ;
int red = 9 ;
int yellow = 10 ;
int green = 11 ;
int counter = 0 ;
int read = 0 ;
void setup()
{

pinMode(red,OUTPUT); 
pinMode(yellow,OUTPUT); 
pinMode(green,OUTPUT); 
pinMode(button,INPUT); 
 
}

void loop()
{
read=digitalRead(button);
  if(read == HIGH)
  {
    counter++ ;
  switch(counter)
  {
  case 1 : digitalWrite(red,HIGH);
           delay(250);
           break;
  case 2 : digitalWrite(yellow,HIGH);
           delay(250);   
           break;
  case 3 : digitalWrite(green,HIGH);
           delay(250);   
           break;
  default :digitalWrite(red,LOW);
           digitalWrite(yellow,LOW);
           digitalWrite(green,LOW);
           counter = 0 ;
           break ;
    
    } 
    
  delay(500);
  }
  
  
}