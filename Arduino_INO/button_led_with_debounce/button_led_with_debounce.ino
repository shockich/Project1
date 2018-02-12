//Please, organize peer review (Skype or smth like that), as I have some questions according logic designed. THX
boolean butt_flag = 0;
boolean butt;
boolean led_flag = 0;
unsigned long last_press;
void setup() {
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  butt = !digitalRead(3); // считать текущее положение кнопки
  
  if (butt == 1 && butt_flag == 0 && millis() - last_press > 100) {
    butt_flag = 1;
    Serial.println("Button pressed");
    led_flag = !led_flag;
    digitalWrite(13, led_flag);
    last_press = millis();
  }
  if (butt == 0 && butt_flag == 1) {
    butt_flag = 0;
    Serial.println("Button released");
  }
}
