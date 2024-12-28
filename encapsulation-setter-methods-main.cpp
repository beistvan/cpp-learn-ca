#include <iostream>
#include <vector>
#include "Car.hpp"
#include "isValid.hpp"


int main(){
  
  vector<Car> cars = {Car(0), Car(0), Car(0)};
  
  int code1 = cars[0].setSpeed(100);
  int code2 = cars[1].setSpeed(-3);
  int code3 = cars[2].setSpeed(250);

  isValid(code1, cars[0].getSpeed());
  isValid(code2, cars[1].getSpeed());
  isValid(code3, cars[2].getSpeed());
  return 0;
  
}
