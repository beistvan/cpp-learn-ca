#include "Car.hpp"

using namespace std;

int main() {
  Car myCar;
  myCar.model = "Nissan";
  myCar.name = "Altima";

  myCar.printModel();
  myCar.honk();
  myCar.speed = 120;
  myCar.move();

  return 0;
}
