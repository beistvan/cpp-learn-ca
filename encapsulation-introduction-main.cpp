#include <iostream>
#include "Example.hpp"

using namespace std;

int main() {
  Example exampleObj(42);

  // Access private data using public method
  cout << "Data: " << exampleObj.getData() << endl;

  return 0;
}
