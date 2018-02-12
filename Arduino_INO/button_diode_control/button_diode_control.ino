void setup() {
  
  pinMode(A5, INPUT_PULLUP);
  
  //There is no need to initiate a pin that will not be used
  //pinMode(12, INPUT);
  
  //Please, create CONSTANTS for pin numbers and use them instead
  pinMode(13, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  boolean button1 = !digitalRead(A5);
  boolean button2 = digitalRead(13);

  //Are we writing state to button???
  //Please, check your datasheet
  if (button1 == 1) digitalWrite(13, 1);
  else digitalWrite (13, 0);
  
  //Please, research the following code notation:
  //digitalWrite(PIN_NUMBER, button1 == 1 ? 1 : 0);

  //Please, research how to form Output in a single line, using variables and concatination;
  Serial.print("Button 1: "); Serial.print(button1);
  Serial.print(", Button 2: "); Serial.println(button2);
}
