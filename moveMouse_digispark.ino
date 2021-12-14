#include <DigiMouse.h>

const unsigned long t = 2000;
const unsigned long waitTime = 24000 - t; // 4 * 60 * 1,000(ms)

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  DigiMouse.begin();
}

void loop() {
  // LED点灯
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);

  // マウス移動
  DigiMouse.moveX(2);
  DigiMouse.delay(10);
  DigiMouse.moveX(-2);
  DigiMouse.delay(10);
  DigiMouse.moveX(-2);
  DigiMouse.delay(10);
  DigiMouse.moveX(2);
  DigiMouse.delay(t);
  
  // LED消灯
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);

  // ウェイト
  DigiMouse.delay(waitTime);
}
