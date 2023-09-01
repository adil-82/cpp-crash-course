#include <iostream>

int main() {
  // switch alternative to using many "else if" statements compares one value
  // against matching cases.

  int month;
  std::cout << "Enter the month (1-6): " ;
  std::cin >> month;

  switch (month) {
    case 1:
      std::cout << "It is Janary";
      break;
    case 2:
      std::cout << "It is Fabray";
      break;
    case 3:
      std::cout << "It is Mars";
      break;
    case 4:
      std::cout << "It is Avril";
      break;
    case 5:
      std::cout << "It is Mai";
      break;
    case 6:
      std::cout << "It is Juin";
      break;
    default:
      std::cout << "Please enter in only numbers (1-6)" << std::endl;
  }
}
