#include <iostream>
#include <cmath>

int main() {
  double a, b, c;

  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;

  double root1, root2;

  root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
  root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

  std::cout << "Root 1 is " << root1 << std::endl;
  std::cout << "Root 2 is " << root2 << std::endl;
}
