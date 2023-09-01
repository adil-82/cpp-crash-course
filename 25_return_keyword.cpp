#include <iostream>
#include <string>

double square(double length);
double cube(double length);
std::string concatStr(std::string first, std::string last);

int main() {
  // return = return a value back to the spot where you called the encompassing

  double length;

  std::cout << "Enter the length: ";
  std::cin >> length;

  double area = square(length);
  std::cout << "Area: " << area << std::endl;

  double volume = cube(length);
  std::cout << "Volume: " << volume << std::endl;

  std::string firstName, lastName;

  std::cout << "Enter Your First Name: ";
  std::cin >> firstName;

  std::cout << "Enter Your Last Name: ";
  std::cin >> lastName;

  std::string fullName = concatStr(firstName, lastName);
  std::cout << "Your Full Name is: " << fullName << std::endl;
}

std::string concatStr(std::string first, std::string last) {
  return first + " " + last;
}

double square(double length) { return length * length; }

double cube(double length) { return length * length * length; }
