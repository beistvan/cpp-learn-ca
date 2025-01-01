#include "Vehicle.hpp"
#include <iostream>
class Car : public Vehicle {
public:
  std::string model;
  void honk();
  void printModel();

};
