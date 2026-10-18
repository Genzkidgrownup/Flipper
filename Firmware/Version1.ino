#include <Servo.h>
Servo lol;
void setup()
{
  lol.attach(4);
}
void loop()
{
  lol.write(90);
  delay(1000);
  lol.write(180);
  delay(1000);
  lol.write(0);
  delay(1000);
}
