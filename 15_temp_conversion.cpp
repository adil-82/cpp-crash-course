#include <iostream>

int main() {
  int temp;
  char unit;

  std::cout << "*************** Temperature conversion ***************"
            << std::endl;
  std::cout << "F = Fahrenheit" << std::endl;
  std::cout << "C = Celsius" << std::endl;
  std::cout << "What unit would you like to convert to: ";
  std::cin >> unit;

  if (unit == 'F' || unit == 'f') {
    std::cout << "Enter the Temperature in Fahrenheit: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32.0;
    std::cout << "Temperature is: " << temp << " C°" << std::endl;
  } else if (unit == 'C' || unit == 'c') {
    std::cout << "Enter the Temperature in Celsius: ";
    std::cin >> temp;

    temp = (temp - 32) / 1.8;
    std::cout << "Temperature is: " << temp << " F°" << std::endl;
  } else {
    std::cout << "Please enter in only C or F !" << std::endl;
  }
  std::cout << "******************************************************"
            << std::endl;
}
