#include "Student.hpp"

Student(int initialGrade, int studentAge) : grade(initialGrade), age(studentAge);

bool Student::isValidAge() {
  return age >= 1 && age <= 150;
}
