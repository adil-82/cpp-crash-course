#include <iostream>
// #include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main() {
  // typedef = reserved keyword used to create an additional name (alias) for
  // aother data type. New identifier for an existing type. Helps with
  // readability and reduces typos. Use when there is a clear benefit .
  // Replaced with 'using' (work better w/ templates)

  // pairlist_t pairlist;

  // std::string firstName = "Adil";
  text_t firstName = "Adil";
  number_t age = 31;

  std::cout << "My first name is: " << firstName << " and I'm " << age << " years old" << std::endl;
}
