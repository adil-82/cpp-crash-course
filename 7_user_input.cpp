#include <iostream>
#include <string>

// cout << (insertion operator)
// cim >> (extraction operator)

int main() {
  std::string name;
  int age;

  std::cout << "How old are you ?" << std::endl;
  std::cin >> age;

  std::cout << "What's your name ?" << std::endl;
  // std::cin >> name;
  // std::getline(std::cin, name);
  std::getline(std::cin >> std::ws, name); // strings with spaces !

  // std::cout << "How old are you ?" << std::endl;
  // std::cin >> age;

  std::cout << "Hello, " << name << std::endl;
  std::cout << "Your are " << age << " year old." << std::endl;
}
