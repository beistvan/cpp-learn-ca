#include <iostream>

int main() {
  // Add your code below  
  double weightOnEarth = 90;
  double weightOnMars = weightOnEarth / 9.81 * 3.711;
  std::cout << "Weight on Earth: " << weightOnEarth << ". This amount weights on Mars: " << weightOnMars << "." << std::endl;

  double miles = 10;
  double kilometers = miles / 0.62137119;
  std::cout << miles << " miles will be " << kilometers << " kilometers." << std::endl;
}
