#include <iostream>

int main() {
  // break = breack out of a loop
  // continue = skip current iteration

  for (int i = 1; i <= 10; i++) {
    if (i == 7) {
      // break;
      continue;
    }
    std::cout << i << std::endl;
  }
}
