#include "Car.hpp"

Car::Car(int initialSpeed) : speed(initialSpeed){

}

int Car::getSpeed(){
  return speed;
}

void Car::setSpeed(int carSpeed) {
  speed = carSpeed;
}
