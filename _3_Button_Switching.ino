

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin1= 2;  // the number of the pushbutton pin
const int buttonPin2= 3;
const int buttonPin3= 4;

const int ledPin1 =  13; 
const int ledPin2 =  12;  // constant int
const int ledPin3 =  11;  // constant int
const int ledPin4 =  10;  // constant int
const int ledPin5 =   9;  // constant int

int switchRead1 = 0;
int switchRead2 = 0;
int switchRead3 = 0;

int counter = 0;

boolean pressing1 = false;

#define ledPin1 13  //define is used to set a constant variable
#define ledPin2 12  //define is used to set a constant variable
#define ledPin3 11  //define is used to set a constant variable
#define ledPin4 10  //define is used to set a constant variable
#define ledPin5 9   //define is used to set a constant variable

// variables will change:
int buttonState = 1;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);  
}

void loop() {
    // read the state of the pushbutton value:
    //digitalWrite(ledPin1, HIGH);
    switchRead1 = digitalRead(buttonPin1);
    switchRead2 = digitalRead(buttonPin2);
    switchRead3 = digitalRead(buttonPin3);
  
    // check if the pushbutton is pressed.
    // if it is, the buttonState is HIGH:
    if (switchRead1 == 1) {  
      Serial.println("Button #1 Pressed");
      pressing1 = true;
      }
  
    if(switchRead2 == 1){
      Serial.println("Button #2 Pressed");
      counter = 2;
      }
  
    if(switchRead3 == 1){
      Serial.println("Button #3 Pressed");
      counter = 3;
      }
   
     // Check if the button is released and if it has been pressed before.
     if (switchRead1 == 0 && pressing1 == true) { 
      // Setting for the next time button is pressed
      pressing1 = false;
      //Do Something
      counter++;
      Serial.print("Counter: ");
      Serial.println(counter);
      } 
        
          if (counter == 1) {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        digitalWrite(ledPin5, LOW);
         
         
        } else if (counter == 2) {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        digitalWrite(ledPin5, LOW); 
        
        } else if (counter == 3) {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, LOW);
        digitalWrite(ledPin5, LOW);
        
        } else if (counter == 4) {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, HIGH);
        digitalWrite(ledPin5, LOW);
      
        } else if (counter == 5) {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        digitalWrite(ledPin5, HIGH);
          
      } else {
         counter = 0;
         digitalWrite(ledPin1, LOW);
         digitalWrite(ledPin2, LOW);
         digitalWrite(ledPin3, LOW);
         digitalWrite(ledPin4, LOW);
         digitalWrite(ledPin5, LOW);
      
        }

  }

