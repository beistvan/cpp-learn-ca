#include "PrivateDog.hpp"
using namespace std;

void PrivateDog::setName(string dogName) {
  name = dogName;
}

void PrivateDog::setSpecies(string dogSpecies) {
  species = dogSpecies;
}

void PrivateDog::setAge(int dogAge) {
  age = dogAge;
}

string PrivateDog::getName() {
  return name;
}

string PrivateDog::getSpecies() {
  return species;
}

int PrivateDog::getAge() {
  return age;
}
