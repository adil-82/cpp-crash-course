#include <algorithm>
#include <cmath>
#include <iostream>

int main() {
  double x = 3;
  double y = 4;
  double z;

  z = std::max(x, y);
  std::cout << "std::max(x, y): " << z << std::endl;

  z = std::min(x, y);
  std::cout << "std::min(x, y): " << z << std::endl;

  z = std::pow(2, 3);
  std::cout << "std::pow(2, 3): " << z << std::endl;

  z = std::sqrt(9);
  std::cout << "std::sqrt(9): " << z << std::endl;

  z = std::abs(-3);
  std::cout << "std::abs(-3): " << z << std::endl;

  z = std::round(3.14);
  std::cout << "std::round(3.14): " << z << std::endl;

  z = std::round(3.51);
  std::cout << "std::round(3.51): " << z << std::endl;

  z = std::ceil(3.14);
  std::cout << "std::ceil(3.14): " << z << std::endl;

  z = std::floor(3.99);
  std::cout << "std::floor(3.99): " << z << std::endl;
  
}
// https://www.cplusplus.com/reference/cmath/
