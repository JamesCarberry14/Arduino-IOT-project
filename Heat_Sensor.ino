
const int ledPin =  3;  
const int ledPin1 =  4;   
const int ledPin2 =  6; 

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

    pinMode(ledPin, OUTPUT);
    pinMode(ledPin1, OUTPUT);
      pinMode(ledPin2, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {

  int sensorValue = analogRead(A1);

  Serial.println(sensorValue);
  delay(1000);        

    if (analogRead(A1) <= 480) {
    // turn LED on:
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin, LOW);
        digitalWrite(ledPin2, LOW);
    }          
    else if (analogRead(A1) >= 520) {
            digitalWrite(ledPin2, HIGH);
            digitalWrite(ledPin, LOW);
            digitalWrite(ledPin1, LOW);
            
  } else if(analogRead(A1) >480 && analogRead(A1) <520) {
             digitalWrite(ledPin, HIGH);
             digitalWrite(ledPin2, LOW);
             digitalWrite(ledPin1, LOW);
  }
else {
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
     }

  }
    
 
