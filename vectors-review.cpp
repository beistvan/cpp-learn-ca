#include<iostream>
#include<vector>
int main(){
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  int total = 0, product = 1;
  for(int i = 0; i < numbers.size(); i++){
    if(numbers[i] % 2 == 0){
      total +=  numbers[i];
    } else {
      product *= numbers[i];
    }
  }
  std::cout << "Sum of even numbers is " << total << std::endl;
  std::cout << "Product of odd numbers is " <<  product << std::endl;
  return 0;
}
