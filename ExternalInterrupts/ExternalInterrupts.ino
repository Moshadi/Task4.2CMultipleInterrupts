#define BTN_PIN 9 
#define PIR_PIN 10
#define LED_PIN 11

bool ledState = false; 
int switchState = 0;

void ButtonInterrupt() {
  ledState = !ledState; 
  digitalWrite(LED_PIN, ledState);
  Serial.println("ButtonInterrution");

}

void MotionInterrupt() {
  ledState = !ledState;
  digitalWrite(LED_PIN, ledState);
  Serial.println("MotionInterrution");
}

void setup() {
  Serial.begin(9600); 

  pinMode(BTN_PIN, INPUT_PULLUP);
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(BTN_PIN), ButtonInterrupt, FALLING);
  attachInterrupt(digitalPinToInterrupt(PIR_PIN), MotionInterrupt, RISING);

}

void loop() {
  // put your main code here, to run repeatedly;

}
