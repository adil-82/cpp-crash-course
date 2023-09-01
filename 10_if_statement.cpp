#include <iostream>

int main() {
  int age;

  std::cout << "Enter your age: " << std::endl;
  std::cin >> age;

  if (age >= 18) {
    std::cout << "Welcome to the site!" << std::endl;
  } else if (age < 0) {
    std::cout << "You haven't born yet!" << std::endl;
  } else {
    std::cout << "Your are not old enough to enter!" << std::endl;
  }
}
