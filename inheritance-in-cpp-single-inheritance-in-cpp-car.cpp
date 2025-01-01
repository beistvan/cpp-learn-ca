#include "Car.hpp"
using namespace std;

void Car::honk() {
  cout << name << " goes Beep Beep!" << endl;
}

void Car::printModel() {
  cout << "The car is a " << model << endl;
}
