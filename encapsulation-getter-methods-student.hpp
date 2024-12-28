#include <iostream>

using namespace std;

class Student {
private:
  string name;
  int age;

public:
  Student(string studentName, int studentAge);
  string getName();
  int getAge();
};
