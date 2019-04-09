int MOTOR_IN1 = 9;
int MOTOR_IN2 = 10;

double cycleTime = 20;

void setup() {
  // put your setup code here, to run once:
  pinMode(MOTOR_IN1, OUTPUT);
  pinMode(MOTOR_IN2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(MOTOR_IN1, LOW);
    analogWrite(MOTOR_IN2, 255);
    delay(100);
    analogWrite(MOTOR_IN2, 0);
    delay(10);
}
