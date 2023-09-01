#include <iostream>

int main() {
  int grade = 70;
  grade >= 60 ? std::cout << "You pass" << std::endl
              : std::cout << "You fail" << std::endl;

  int number = 9;
  number % 2 ? std::cout << "ODD" << std::endl
             : std::cout << "EVEN" << std::endl;

  std::cout << (number % 2 ? "ODD" : "EVEN") << std::endl;

  bool hungry = false;
  std::cout << (hungry ? "Your are hungry" : "Your are full") << std::endl;
}
