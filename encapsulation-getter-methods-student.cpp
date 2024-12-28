#include "Student.hpp"

using namespace std;

Student::Student(string studentName, int studentAge) : name(studentName), age(studentAge) { }

string Student::getName() {
  return name;
}

int Student::getAge() {
  return age;
}
