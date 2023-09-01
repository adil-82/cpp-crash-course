#include <iostream>

int main() {
  // do while loop - do some block of code first , THEN repeat again if
  // condition is true

  int number;

  // std::cout << "Enter a positive #: " << std::endl;
  // std::cin >> number;

  // while (number < 0) {
  //   std::cout << "Enter a positive #: " << std::endl;
  //   std::cin >> number;
  // }
  do {
    std::cout << "Enter a positive #: " << std::endl;
    std::cin >> number;
  } while (number < 0);

  std::cout << "The # is : " << number << std::endl;
}
