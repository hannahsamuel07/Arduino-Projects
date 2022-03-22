


const int xPin = 9;                           // X output of the accelerometer
const int yPin = 10;                        // Y output of the accelerometer

        
void setup() {
  Serial.begin(9600);                          // initialize serial communications:
  pinMode(xPin, INPUT);               // initialize the pins connected to the accelerometer as inputs
  pinMode(yPin, INPUT);
}


void loop() {
  int pulseX, pulseY;                       // variables to read the pulse widths:
  int accelerationX, accelerationY;       // variables to contain the resulting accelerations

  pulseX = pulseIn(xPin,HIGH);            // read pulse from x- and y-axes:
  pulseY = pulseIn(yPin,HIGH);

  accelerationX = ((pulseX / 10) - 500) * 8;
  accelerationY = ((pulseY / 10) - 500) * 8;

  Serial.print(accelerationX);            // print the acceleration
  Serial.print("\t");                       
  Serial.print(accelerationY);
  Serial.println();

  delay(100);
 }
