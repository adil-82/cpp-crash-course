#include <iostream>

int main() {
  // integer (whole number)
  int x;     // declaration
  x = 5;     // assignment
  std::cout << x << std::endl;

  int y = 6; // declaration & assignment
  std::cout << y << std::endl;

  int sum = x + y;
  std::cout << sum << std::endl;

  int days = 7.5;
  std::cout << days << std::endl;

  // double (decimal)
  double price = 10.99;
  std::cout << price << std::endl;

  // single character
  char grade = 'A';
  std::cout << grade << std::endl;

  // boolean (true or false)
  bool student = false;
  std::cout << student << std::endl;

  // string (objects that represents a sequence of text)
  std::string name = "Adil";
  std::cout << "hello " << name << std::endl;

  int age = 21;
  std::cout << "You are " << age << " years old !" << std::endl;
}
