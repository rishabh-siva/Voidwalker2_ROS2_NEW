#include <Arduino.h>
#include "Timer.h"

void MyTimer::start(unsigned long milliseconds) {
  timer_interval = milliseconds;
  previousMillis = 0;
}

bool MyTimer::isReady() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= timer_interval) {
    return true;
  }
  return false;
}

void MyTimer::restart() {
  previousMillis = millis();
}
