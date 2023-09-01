#include <algorithm>
#include <iostream>
#include <string>

int main() {
  // fill() = Fills a range of elements with a specified value
  //          fill(begin, endn value)

  std::string foods[10] = {
      "pizza", "pizza", "pizza", "pizza", "pizza",
      "pizza", "pizza", "pizza", "pizza", "pizza",
  };

  for (std::string food : foods) {
    // std::cout << food << std::endl;
    std::cout << food << " ";
  }

  const int SIZE = 100;
  // std::string drinks[100];
  std::string drinks[SIZE];

  // fill(drinks, drinks + 100, "cola");
  // std::fill(drinks, drinks + 100, "cola");
  fill(drinks, drinks + (SIZE / 3), "cola");
  fill(drinks + (SIZE / 3), drinks + ((2 * SIZE) / 3), "fanta");
  fill(drinks + ((2 * SIZE) / 3), drinks + SIZE, "water");

  for (std::string drink : drinks) {
    std::cout << drink << " ";
  }
}
