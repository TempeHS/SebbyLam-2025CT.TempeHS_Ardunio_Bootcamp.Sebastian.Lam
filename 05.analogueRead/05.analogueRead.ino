/*
  Author: 

  Learning Intention:
  The students will learn how to wire a variable resistor as a pseudo sensor and read analogue
  data from that PIN.
  
  Success Criteria:
    1.  I can wire a variable resistor in TINKERCAD
    2.  I know how to read analogue data from a specific PIN
    3.  I know the range of analogue data
    4.  I can organise output data so it correctly plots on the serial monitor
    5.  I can apply this knowledge to the Light, Sound and Rotary Potentiometer in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/analog-io/analogread/
  Schematic:
    https://www.tinkercad.com/things/97wMDip2Ata-bootcamp-analogueread/editel
    https://github.com/TempeHS/TempeHS_Ardunio_Bootcamp/blob/main/05.analogueRead/Bootcamp-analogueRead.png
*/


void setup() {
  Serial.begin(9600);
  Serial.println("Debuged");

}

void loop() {
  Serial.println(analogRead(A3));
}

