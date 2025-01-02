#include <string>
#include <iostream>

using namespace std;

class Vehicle {
public:
  void setVehicleType(string vehicleType);
  string getVehicleType();

private:
  string type; 

protected:
  string make;
  int year;
  string model;
};
