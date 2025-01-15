#include "Duck.hpp"

int main() {
  Duck quackster;

  quackster.setMaxHeight(200);
  quackster.setMaxSpeed(20);
  quackster.speak();
  quackster.fly();
  quackster.land();
  quackster.run();
  quackster.stop();
  return 0;
}
