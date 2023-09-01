#include <iostream>
#include <string>

// void swap(std::string x, std::string y); // Pass by value
void swap(std::string &x, std::string &y); // Pass by reference

int main() {
  std::string x = "cola";
  std::string y = "fanta";
  // std::string temp;

  std::cout << "X: " << x << std::endl;
  std::cout << "y: " << y << std::endl;

  // temp = x;
  // x = y;
  // y = temp;

  swap(x, y);

  std::cout << "X: " << x << std::endl;
  std::cout << "y: " << y << std::endl;

  std::cout << "From main fn X: " << &x << std::endl;
  std::cout << "From main fn y: " << &y << std::endl;
}


// void swap(std::string x, std::string y) { // Pass by value
void swap(std::string &x, std::string &y) { // Pass by reference
  std::string temp;
  temp = x;
  x = y;
  y = temp;

  std::cout << "From swap fn X: " << &x << std::endl;
  std::cout << "From swap fn y: " << &y << std::endl;
}
