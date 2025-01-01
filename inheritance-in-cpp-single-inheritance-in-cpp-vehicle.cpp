#include "Vehicle.hpp"
#include <iostream>

using namespace std;

void Vehicle::move() {
  cout << name << " is moving at " << speed << " km/h." << endl;
}
