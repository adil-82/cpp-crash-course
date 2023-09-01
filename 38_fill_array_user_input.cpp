#include <iostream>
#include <string>

int main() {
  // arrays have limited size : static.

  std::string foods[5];
  int size = sizeof(foods) / sizeof(std::string);
  std::string temp;
  int count = 1;

  for (int i = 0; i < size; i++) {
    std::cout << "Enter a food you like or 'q' to N°" << i + 1 << ": ";
    // std::getline(std::cin, foods[i]);
    std::getline(std::cin, temp);
    // if (foods[i] == "q") {
    if (temp == "q") {
      break;
    } else {
      foods[i] = temp;
    }
  }
  std::cout << "You like the following food: " << std::endl;

  // for (std::string food : foods) {
  //   std::cout << food << std::endl;
  // }

  for (int i = 0; !foods[i].empty(); i++) {
    std::cout << "Food N°" << count++ << ": " << foods[i] << std::endl;
  }
}
