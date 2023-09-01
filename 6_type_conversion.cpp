#include <iostream>

int main() {
  // type conversion a value of one data type to another
  // Implicit = automatic
  // Explicit = Precede value with new data type (int)

  // Implicit
  int x = 3.14;
  std::cout << x << std::endl;

  // Explicit
  // double y = 3.14;
  double y = (int)3.14;
  std::cout << y << std::endl;

  char z = 100;
  std::cout << z << std::endl;
  std::cout << (char)100 << std::endl;

  int correct = 8;
  int questions = 10;
  double score = correct / (double)questions * 100;
  std::cout << "score: " << score << " %" << std::endl;
}
