#include "Car.hpp"

Car::Car(int initialSpeed) : speed(initialSpeed){

}

int Car::getSpeed(){
  return speed;
}

int Car::setSpeed(int carSpeed) {
  int returnCode;
  if (carSpeed > 200) {
    returnCode = 3; 
  } else if (carSpeed < 0) {
    returnCode = 2;
  } else {
    speed = carSpeed;
    returnCode = 1; 
  }
  return returnCode;
}
