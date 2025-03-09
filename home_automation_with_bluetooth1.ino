// C++ code
//
int val= 0;
void setup()
{ 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  int val= 0;
}
 

void loop()
{  
 val = Serial.read();
  
  if (val == '1')
  { digitalWrite(2, HIGH);
   Serial.println("RED LED IS ON");
  } 
  if (val == '2')
  { digitalWrite(2, LOW);
   Serial.println("RED LED IS OFF");
  } 
  if (val =='3'){
    digitalWrite(3, HIGH);
    Serial.println(" BLUE LED IS ON");
   
  }
  if (val =='4'){
    digitalWrite(3, LOW);
    Serial.println(" BLUE LED IS OFF");
  }
   if (val =='5'){
    digitalWrite(4, HIGH);
    Serial.println(" GREEN LED IS ON");
   
  }
  if (val =='6'){
    digitalWrite(4, LOW);
    Serial.println(" GREEN LED IS OFF");
  }
  if (val =='7'){
    digitalWrite(4, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    Serial.println(" ALL LEDS ARE ON");
  }
  if (val =='8'){
    digitalWrite(4, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    Serial.println(" ALL LEDS ARE OFF");
  }
}
  