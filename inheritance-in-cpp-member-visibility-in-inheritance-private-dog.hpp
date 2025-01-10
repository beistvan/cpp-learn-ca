#include "Animal.hpp"
using namespace std;
class PrivateDog : private Animal {
public:
  void setName(string dogName);
  void setSpecies(string dogSpecies);
  void setAge(int dogAge);
  string getName();
  string getSpecies();
  int getAge();

};
