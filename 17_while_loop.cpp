#include <iostream>
#include <string>

int main() {
  std::string name;

  while (name.empty()) {
    std::cout << "Enter your name !" << std::endl;
    std::getline(std::cin, name);
  }
  std::cout << "Hello " << name << std::endl;
}
