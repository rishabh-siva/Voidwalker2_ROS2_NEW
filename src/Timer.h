#ifndef MYTIMER_H
#define MYTIMER_H

class MyTimer {
public:
  void start(unsigned long milliseconds);
  bool isReady();
  void restart();

private:
  unsigned long previousMillis;
  unsigned long timer_interval;
};

#endif
