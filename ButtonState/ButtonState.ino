
const int buttonPin = 12;     
const int ledPin = 2;


int buttonState = 0;
                             
void setup() {      
  Serial.begin(9600);
   pinMode (buttonPin, INPUT);
   pinMode(ledPin, OUTPUT);
}

 
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  delay(1);
  if(buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
  
}
