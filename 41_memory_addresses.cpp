#include <iostream>
#include <string>

int main() {
  // memory address = a location in memory where data is stored
  // a memory address can accessed with "&" (address-of operator)

  std::string name = "Adil";
  int age = 21;
  bool student = true;

  std::cout << "address of string: " << &name << std::endl;
  std::cout << "address of int: " << &age << std::endl;
  std::cout << "address of bool: " << &student << std::endl;
}
