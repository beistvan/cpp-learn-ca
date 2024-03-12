#include <iostream>

int main() {
  //Dog's Age
  int dog_age = 12;  

  int early_years = 21;
  int later_years = (dog_age -2) * 4;
  int human_years = early_years + later_years;
  
  std::cout << "My name is Simba! Ruff ruff, I am " << human_years << " years old in human years.\n";
}
