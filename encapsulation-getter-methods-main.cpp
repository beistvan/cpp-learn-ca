#include <iostream>
#include "Student.hpp"

using namespace std;

int main() {
  Student student("Peter", 20);  
  cout << "Student's Name: " << student.getName() << endl; 
  cout << "Student's Age: " << student.getAge() << endl; 
  return 0;
}
