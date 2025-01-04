#include "Car.hpp"

using namespace std;

void Car::setType(string carType) {
  setVehicleType(carType);
}

void Car::setYear(int carYear) {
  year = carYear;
}

void Car::setMake(string carMake) {
  make = carMake;
}

void Car::setModel(string carModel) {
  model = carModel;
}

void Car::displayInfo() {
  cout << "Vehicle type: " << getVehicleType() << endl;
  cout << "Car make: " << make << endl;
  cout << "Car model: " << model << endl;
  cout << "Car year: " << year << endl;
}
