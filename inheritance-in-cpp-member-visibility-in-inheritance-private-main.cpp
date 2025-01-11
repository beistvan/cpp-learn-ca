#include "PrivateDog.hpp"
#include <iostream>

using namespace std;

int main() {
  PrivateDog myDoggie;
  // myDoggie.species = "Cavachon";
  // myDoggie.name = "Milton";
  // myDoggie.age = 4;
  myDoggie.setSpecies("Cavachon");
  myDoggie.setName("Milton");
  myDoggie.setAge(4);

  return 0;
}
