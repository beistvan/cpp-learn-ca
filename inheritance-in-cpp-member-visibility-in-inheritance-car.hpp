#include "Vehicle.hpp"
#include <iostream>

using namespace std;

class Car : public Vehicle {
public:
  void setType(string carType);
  void setYear(int carYear);
  void setMake(string carMake);
  void setModel(string carModel);  
  void displayInfo();
};
