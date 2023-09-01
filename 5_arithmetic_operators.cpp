#include <iostream>

int main() {
  // arithmetic operators return the result of a specific arithmetic operation
  // (+ - * /)

  int students = 20;
  // double students = 20;
  // students = students + 1;
  // students+=1;
  students++;
  std::cout << "students++ : " << students << std::endl;

  // students = students - 1;
  // students-=1;
  students--;
  std::cout << "students-- : " << students << std::endl;

  // students = students * 2;
  students*=2;
  std::cout << "students*=2 : " << students << std::endl;

  double persons = 20;
  // students = students / 2;
  persons/=3;
  std::cout << "persons/=3 : " << persons << std::endl;

  std::cout << "students % 3 : " << students % 3 << std::endl;

}
