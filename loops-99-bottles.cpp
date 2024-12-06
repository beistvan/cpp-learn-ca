#include <iostream>

int main() {

  // Write a for loop here:
  
  for (int i = 0; i < 100; i++) 
  {      
      std::cout << i << " bottles of pop on the wall." << std::endl 
                << "Take one down and pass it around." << std::endl 
                << i-1 << " bottles of pop on the wall." << std::endl;
  }
  
}
