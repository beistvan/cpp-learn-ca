#include <iostream>

int main() {
  double pesos, reais, soles, dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  //Pesos to USD: 0.053
  //Reais to USD: 0.2
  //Soles to USD: 0.26

  dollars = (0.053 * pesos) + (0.2 * reais) + (0.26 * soles);

  std::cout << "US Dollars = $" << dollars << std::endl;
  
}
