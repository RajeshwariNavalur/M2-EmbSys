//Arduino code


#include <LiquidCrystal.h>
#define motorPin 50
#define sensorPin 0
const int  ledPin= 24;
float Celsius;
int sensorValue;
int x=200;



// initialize pins for interconnection of LCD with the arduino 
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
// pushbutton pins
const int buttonPin = 6; 
const int buttonPin7 = 7;
const int buttonPin8 = 8;
const int buttonPin9 = 9;
const int buttonPin10 = 10;
const int buttonPin13 = 13;
const int buttonPin53 = 53;
const int buttonPin43 = 43;


// variables 
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
 
  lcd.print("Induction ON"); //display when power is on
  delay(1000);

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
    digitalWrite(ledPin, HIGH);  // LED is ON to indicate vessel is placed
    digitalWrite(motorPin, HIGH); // cooling circuit is ON when vessel is placed and cooking is started 
    


    if (buttonState7 == HIGH)
    {
      // When fry option is selected
      lcd.clear();
      lcd.print("Fry");  
      lcd.setCursor(0, 1);
      lcd.print(millis() / 1000); // print time
      heat();               // function called to increase or decrease heat
     lcd.print(" Heat: ");
     lcd.print(x);
      delay(1000);
    }

  if (buttonState8 == HIGH)
    {
      // When water option is selected
      lcd.clear();
      lcd.print("water");
      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print(millis() / 1000); // display time
      
      heat(); // function called to increase or decrease heat
     lcd.print(" Heat: "); 
     lcd.print(x);

      delay(1000);
      temp();
    }

    if (buttonState9 == HIGH)
    {
      // When milk option is selected
      lcd.clear();
      lcd.print("milk");
      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print(millis() / 1000);
      heat(); // function called to increase or decrease heat
     lcd.print(" Heat: ");
     lcd.print(x);
     
      delay(1000);
      temp();
    }

    if (buttonState10 == HIGH)
    {
      // When preasure cooker option is selected
      lcd.clear();
      lcd.print("preasure cooker");

      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print(millis() / 1000);
     
      heat(); // function called to increase or decrease heat
     lcd.print(" Heat: ");
     lcd.print(x);

      delay(1000);
    }

    if (buttonState13 == HIGH)
    {
      // When curry option is selected
      lcd.clear();
      lcd.print("curry");

      lcd.setCursor(0, 1);
      // print the number of seconds since reset:
      lcd.print(millis() / 1000);
     
    
      heat();// function called to increase or decrease heat
     lcd.print(" Heat: ");
     lcd.print(x);

      delay(1000);
    }
  }

  else 
  { 
    // When vessel is not placed or removed
    
    digitalWrite(ledPin, LOW); // turn LED off:
    lcd.setCursor(1, 0);
    lcd.clear();
    lcd.print("---");
    delay(1000);
    digitalWrite(motorPin, LOW);// // turn cooling circuit off:
  }
}

void heat()
{
  if (buttonState43 == HIGH && x <=2000)
  {
    x = x + 200; // increase heat
  }
    if (buttonState53 == HIGH &&  x >= 200)
  {
    x = x - 200; // decrease heat
  }

}
void temp()
{
  // function to read temperature of water and milk
  double optvoltage, thermRes, therln, temp;
  sensorValue = analogRead(sensorPin); // read the temperature
  optvoltage = ( (sensorValue * 5.0) / 1023.0 );
  thermRes= ( ( 5 * ( 10.0 / optvoltage ) ) - 10 ); 
  thermRes= thermRes* 1000 ;
  therln  = log(thermRes);
  temp= ( 1 / ( 0.001129148 + ( 0.000234125 * therln ) + ( 0.0000000876741 * therln * therln * therln ) ) ); /* Temperature in Kelvin */
  temp= temp - 273.15+80;
   lcd.clear();
  lcd.print(temp);
  lcd.print("  Celsius "); // Display temperature
  delay(1000);
}
