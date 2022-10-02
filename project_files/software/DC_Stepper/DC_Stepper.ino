int motor_RU = 9;
int motor_LU = 8;
int motor_RD = 6;
int motor_LD = 5;

int on_interval = 60;
int off_interval = 20;
int rev_interval = 40;

void drive(int mode)
{
  if(mode == 0)
  {
    digitalWrite(motor_RU, LOW);
    digitalWrite(motor_LU, LOW);
    digitalWrite(motor_RD, LOW);
    digitalWrite(motor_LD, LOW);
  }
  else if(mode == 1)
  {
    digitalWrite(motor_RU, LOW);
    digitalWrite(motor_LU, HIGH);
    digitalWrite(motor_RD, HIGH);
    digitalWrite(motor_LD, LOW);
  }
  else if(mode == -1)
  {
    digitalWrite(motor_RU, HIGH);
    digitalWrite(motor_LU, LOW);
    digitalWrite(motor_RD, LOW);
    digitalWrite(motor_LD, HIGH);
  }
}

void stepping(bool clockwise, int on_interval, int off_interval)
{
  if(clockwise == 1)
  {
    drive(1);
    delay(on_interval);
    drive(0);
    delay(off_interval);
    drive(-1);
    delay(rev_interval);
    drive(0);
    delay(off_interval);
  }
  else
  {
    drive(-1);
    delay(on_interval);
    drive(0);
    delay(off_interval);
    drive(1);
    delay(rev_interval);
    drive(0);
    delay(off_interval);
  }
}

void setup() {
  pinMode(motor_RU, OUTPUT);
  pinMode(motor_LU, OUTPUT);
  pinMode(motor_RD, OUTPUT);
  pinMode(motor_LD, OUTPUT);
  drive(0);
}

void loop() {
  stepping(1, on_interval, off_interval);
  delay(1000);
}
