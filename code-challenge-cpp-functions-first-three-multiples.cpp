#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num){
  std::vector<int> vec = {num};
  for(int i = 2; i <= 3; i++) {
    vec.push_back(i * num);
  }
  return vec;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
