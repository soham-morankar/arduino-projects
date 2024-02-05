#include<Servo.h>
Servo s1;
int angle;
void setup() {
  s1.attach(9);

}

void loop() {
  for(angle = 0;angle<180;angle++){
    s1.write(angle);
    delay(15);
  }
  for(angle=180;angle>0;angle--){
    s1.write(angle);
    delay(15);
  }
}
