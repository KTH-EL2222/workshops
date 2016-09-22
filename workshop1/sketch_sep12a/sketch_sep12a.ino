const byte LEFT_MOTOR_IN1 = 11;
const byte LEFT_MOTOR_IN2 = 10;
const byte LEFT_MOTOR_ENB = 6;

void setup() {
  pinMode(LEFT_MOTOR_IN1, OUTPUT);
  pinMode(LEFT_MOTOR_IN2, OUTPUT);
  pinMode(LEFT_MOTOR_ENB, OUTPUT);
}

void loop() {
  digitalWrite(LEFT_MOTOR_IN1,HIGH);
  digitalWrite(LEFT_MOTOR_IN2,LOW);
  analogWrite(LEFT_MOTOR_ENB,50);
}
