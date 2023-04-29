#include <Servo.h>

       
void setup() {
  kelebek.attach(9);
}

void loop() {
  kelebek.write(0); //0 45 90 135 180 135 90 45 0
  delay(1000);
  kelebek.write(180);
  delay(1000);
}
