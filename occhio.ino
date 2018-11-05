
#include <Servo.h>

Servo occhio;
Servo palpebra;

void setup() {
  occhio.attach(6);
  palpebra.attach(5);
}

void loop() {
muoviocchio();
  palpebra1();
}

void muoviocchio()
{
    for(int i=60;i<120;i++)
  {
  occhio.write(i);
  delay(20);
  }
    for(int i=120;i>60;i--)
  {
  occhio.write(i);
  delay(20);
  }
}

void palpebra1(){
      for(int i=180;i>90;i--)
  {
  palpebra.write(i);
  delay(15);
  }
      for(int i=90;i<180;i++)
  {
  palpebra.write(i);
  delay(15);
  }

}
