/*
  Author: 

  Learning Intention:
  The students understand loop logic and apply it to a range of control structures.
  
  Success Criteria:
    1.  I understand logic Logic is asking questions and based on the true and false answer repeating 
        or not repeating something
    2.  I can apply different comparison operators to get a desired outcome in a count and pre-test loop
        control structure 
    3.  I can read a simple logic flowchart
    4.  I know how to find the documentation for loop logic control structures

  Student Notes: 
  Comparison Operators
    - != (not equal to)
    - < (less than)
    - <= (less than or equal to)
    - == (equal to)
    - > (greater than)
    - >= (greater than or equal to)

    Boolean Operators
    - ! (logical not)
    - && (logical and)
    - || (logical or)


  Documentation: 
    https://www.arduino.cc/reference/en/#structure
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/06.loopLogic/Readme.md
    
  Schematic: 
    

static unsigned int LEDpin = 3;


void setup() 
{
pinMode(LEDpin, OUTPUT);
}

void loop() 
{
for (int i = -255; i < 256; i++)
{
unsigned val = i;
  analogWrite(LEDpin,i);
  delay(10);
}
}



void loop()
{
  while (digitalRead(BTNpin) > 0)
  {
    digitalWrite(LEDpin, HIGH);
    Serial.println("Looping");
  }
  digitalWrite(LEDpin, LOW);
  Serial.println("Loop is skipped");
}
*/
#define LEDpin 3
#define BTNpin 4

void setup()
{
  pinMode(BTNpin, INPUT);
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  do{
    digitalWrite(LEDpin, HIGH);
    Serial.println("Looping");

}
  while (digitalRead(BTNpin) < 1);
  
  digitalWrite(LEDpin, LOW);
  Serial.println("Loop is skipped");
}
