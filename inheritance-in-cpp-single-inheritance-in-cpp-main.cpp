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
/* // Output:
The car is a Nissan
Altima goes Beep Beep!
Altima is moving at 120 km/h.
*/
