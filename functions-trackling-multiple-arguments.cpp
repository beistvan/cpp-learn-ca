#include <iostream>

// Define name_x_times() below:
void name_x_times(std::string name, int x) {
  while ( x > 0 ) {
    std::cout << name << std::endl;
    x--;
  }
}

int main() {
  
  std::string my_name = "István!";
  int some_number = 7; // Change this if you like!
  // Call  below with my_name and some_number
  name_x_times(my_name, some_number);
  
}
