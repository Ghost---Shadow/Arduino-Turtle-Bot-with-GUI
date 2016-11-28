#define MOTOR_R_1 4
#define MOTOR_R_2 3
#define MOTOR_L_1 5
#define MOTOR_L_2 6

const byte L = '1';
const byte R = '2';
const byte F = '3';
const byte B = '4';
const byte H = '5';

void setup()
{
  Serial.begin(9600); 
  pinMode(MOTOR_R_1, OUTPUT);
  pinMode(MOTOR_R_2, OUTPUT);
  pinMode(MOTOR_L_1, OUTPUT);
  pinMode(MOTOR_L_2, OUTPUT);
}
void loop() {
  byte in;
  if (Serial.available()) {
    in = Serial.read();
    Serial.write(in);
    switch(in){
    case F:
      digitalWrite(MOTOR_R_1, HIGH);
      digitalWrite(MOTOR_R_2, LOW);
      digitalWrite(MOTOR_L_1, HIGH);
      digitalWrite(MOTOR_L_2, LOW);
    break;
    case B:
      digitalWrite(MOTOR_R_1, LOW);
      digitalWrite(MOTOR_R_2, HIGH);
      digitalWrite(MOTOR_L_1, LOW);
      digitalWrite(MOTOR_L_2, HIGH);
    break;
    case L:
      digitalWrite(MOTOR_R_1, HIGH);
      digitalWrite(MOTOR_R_2, LOW);
      digitalWrite(MOTOR_L_1, LOW);
      digitalWrite(MOTOR_L_2, HIGH);
    break;
    case R:
      digitalWrite(MOTOR_R_1, LOW);
      digitalWrite(MOTOR_R_2, HIGH);
      digitalWrite(MOTOR_L_1, HIGH);
      digitalWrite(MOTOR_L_2, LOW);
    break;
	  case H:
      digitalWrite(MOTOR_R_1, LOW);
      digitalWrite(MOTOR_R_2, LOW);
      digitalWrite(MOTOR_L_1, LOW);
      digitalWrite(MOTOR_L_2, LOW);
    break;
    }
  }
}
