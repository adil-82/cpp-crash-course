#include <iostream>

int main() {
  // && = check if two condition are true
  // || = check if at least one of two conditions is true
  // ! = reverses the logical state of its operand

  int temp;

  std::cout << "Enter the temperature: ";
  std::cin >> temp;

  if (temp > 0 && temp < 30) {
    std::cout << "The temperature is good!" << std::endl;
  } else {
    std::cout << "The temperature is bad!" << std::endl;
  }

  if (temp < 0 || temp > 30) {
    std::cout << "The temperature is bad!" << std::endl;
  } else {
    std::cout << "The temperature is good!" << std::endl;
  }
}
