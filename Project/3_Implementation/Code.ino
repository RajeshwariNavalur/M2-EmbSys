

// include the library code:
#include <LiquidCrystal.h>
#define motorPin 50
#define sensorPin 0
const int  ledPin= 24;
float Celsius;
int sensorValue;
int x=200;



// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
// constants won't change. They're used here to set pin numbers:
const int buttonPin = 6; // the number of the pushbutton pin
const int buttonPin7 = 7;
const int buttonPin8 = 8;
const int buttonPin9 = 9;
const int buttonPin10 = 10;
const int buttonPin13 = 13;
const int buttonPin53 = 53;
const int buttonPin43 = 43;


// variables will change:
int buttonState = 0;
int buttonState7 = 0;
int buttonState8 = 0;
int buttonState9 = 0;
int buttonState10 = 0;
int buttonState13 = 0;
int buttonState53 = 0;
int buttonState43 = 0;


void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Induction ON");
  delay(1000);



  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  pinMode(buttonPin9, INPUT);
  pinMode(buttonPin10, INPUT);
  pinMode(buttonPin13, INPUT);
  pinMode(buttonPin53, INPUT);
  pinMode(buttonPin43, INPUT);
  pinMode(sensorValue, INPUT);
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

          Serial.begin(9600);
}


void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  //lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  // lcd.print(millis() / 1000);


  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  buttonState7 = digitalRead(buttonPin7);
  buttonState8 = digitalRead(buttonPin8);
  buttonState9 = digitalRead(buttonPin9);
  buttonState10 = digitalRead(buttonPin10);
  buttonState13 = digitalRead(buttonPin13);
  buttonState53 = digitalRead(buttonPin53);
  buttonState43 = digitalRead(buttonPin43);
 


  // If Push button 6 is high, then induction is on and assumed that vessel is placed
  if (buttonState == HIGH)
  {
    lcd.setCursor(1, 0);
    // lcd.clear();
    // lcd.print("vessel");
    // delay(1000);
    digitalWrite(motorPin, HIGH);
    digitalWrite(ledPin, HIGH);


    if (buttonState7 == HIGH)
    {
      lcd.clear();
      lcd.print("Fry");

      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print(millis() / 1000);
            heat();
     lcd.print(" Heat: ");
     lcd.print(x);
      delay(1000);
    }

  if (buttonState8 == HIGH)
    {
      lcd.clear();
      lcd.print("water");

      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print(millis() / 1000);
      
      heat();
     lcd.print(" Heat: ");
     lcd.print(x);

      delay(1000);
      temp();
    }

    if (buttonState9 == HIGH)
    {
      lcd.clear();
      lcd.print("milk");

      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print(millis() / 1000);
           heat();
     lcd.print(" Heat: ");
     lcd.print(x);
     
      delay(1000);
      temp();
    }

    if (buttonState10 == HIGH)
    {
      lcd.clear();
      lcd.print("preasure cooker");

      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print(millis() / 1000);
     
      heat();
     lcd.print(" Heat: ");
     lcd.print(x);

      delay(1000);

     
    }

    if (buttonState13 == HIGH)
    {
      lcd.clear();
      lcd.print("curry");

      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print(millis() / 1000);
     
    
      heat();
     lcd.print(" Heat: ");
     lcd.print(x);

      delay(1000);
    }



  }
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    lcd.setCursor(1, 0);
    lcd.clear();
    lcd.print("---");
    delay(1000);
    digitalWrite(motorPin, LOW);
  }

//digitalWrite(motorPin, HIGH);

}
void heat()
{
 
  if (buttonState43 == HIGH && x <=2000)
  {
   
    x = x + 200;
  }
    if (buttonState53 == HIGH &&  x >= 200)
  {
   
    x = x - 200;
  }

}
void temp()
{
  double optvoltage, thermRes, therln, temp;
  sensorValue = analogRead(sensorPin); // read the sensor
  optvoltage = ( (sensorValue * 5.0) / 1023.0 );
  thermRes= ( ( 5 * ( 10.0 / optvoltage ) ) - 10 ); /* Resistance in kilo ohms */
 thermRes= thermRes* 1000 ; /* Resistance in ohms   */
 therln  = log(thermRes);
 
  temp= ( 1 / ( 0.001129148 + ( 0.000234125 * therln ) + ( 0.0000000876741 * therln * therln * therln ) ) ); /* Temperature in Kelvin */
  temp= temp - 273.15+80;
   lcd.clear();
  
  lcd.print(temp);
  lcd.print("  Celsius ");
  delay(1000);
  

}
