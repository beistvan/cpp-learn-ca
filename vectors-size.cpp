#include <iostream>
#include <vector>

int main() {
  
  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  grocery.push_back("Mozzarella");
  grocery.push_back("Margerita");
  grocery.push_back("Saussage");
  grocery.push_back("Bacon");
  
  std::cout << grocery.size();
}
