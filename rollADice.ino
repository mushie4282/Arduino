/*
Creating a circuit that will generate a random number from 1 to 9 at the push of a button. 
 */
 
// 7 segment pins
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int decimalPin = 9;

// button pin;
const int pushBTN = 12;
// button state variable
int btnState = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initilize 7 segment pins
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(decimalPin, OUTPUT);
  
  pinMode(pushBTN,INPUT);

  Serial.begin(9600);
}

void displayNum(int numA);// parameter for displaying the number

// the loop routine runs over and over again forever: infinite loop
void loop() {
  // a seperate variable to hold the random number is nessesary b/c the random funtion is faster than my displayNum function
  // the default would display at times if there was not seperate variable
  int numRand = 0; 
  btnState = digitalRead(pushBTN); // reading the button's state
  if(btnState == HIGH) // HIGH = pushed
  {
    numRand = random(1,9);
    Serial.println(numRand); // display on serial port for double checking
    displayNum(numRand);
  }else {
  displayNum(numRand);// default to show only decimal point
  }
}

// 9 while loops to continuously display a number until the btn is pressed again
void displayNum(int numA)
{
  while(numA == 1){
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
      digitalWrite(decimalPin, LOW);
      btnState = digitalRead(pushBTN);// re-evaluate the btn state
      if(btnState == HIGH){// if pressed, exit while loop
        break;
      }
  }
  while(numA == 2){
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, HIGH);
      digitalWrite(decimalPin, LOW);
      btnState = digitalRead(pushBTN);// re-evaluate the btn state
      if(btnState == HIGH){// if pressed, exit while loop
        break;
      }
  }
  while(numA == 3){
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, HIGH);
      digitalWrite(decimalPin, LOW);
      btnState = digitalRead(pushBTN);// re-evaluate the btn state
      if(btnState == HIGH){// if pressed, exit while loop
        break;
      }
  }
  while(numA == 4){
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(decimalPin, LOW);
      btnState = digitalRead(pushBTN);// re-evaluate the btn state
      if(btnState == HIGH){// if pressed, exit while loop
        break;
      }
  }
  while(numA == 5){
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(decimalPin, LOW);
      btnState = digitalRead(pushBTN);// re-evaluate the btn state
      if(btnState == HIGH){// if pressed, exit while loop
        break;
      }
  }
  while(numA == 6){
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(decimalPin, LOW);
      btnState = digitalRead(pushBTN);// re-evaluate the btn state
      if(btnState == HIGH){// if pressed, exit while loop
        break;
      }
  }
  while(numA == 7){
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
      digitalWrite(decimalPin, LOW);
      btnState = digitalRead(pushBTN);// re-evaluate the btn state
      if(btnState == HIGH){// if pressed, exit while loop
        break;
      }
  }
  while(numA == 8){
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(decimalPin, LOW);
      btnState = digitalRead(pushBTN);// re-evaluate the btn state
      if(btnState == HIGH){// if pressed, exit while loop
        break;
      }
  }
  while(numA == 9){
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      digitalWrite(decimalPin, LOW);
      btnState = digitalRead(pushBTN);// re-evaluate the btn state
      if(btnState == HIGH){// if pressed, exit while loop
        break;
      }
  }
  // default display: only display decimal point
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
  digitalWrite(decimalPin, HIGH);
}
