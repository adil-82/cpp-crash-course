#include <iostream>

namespace first {
int x = 1;
}

namespace second {
int x = 2;
}

int main() {
  // Namespace = provide a solution for prventing name conflicts in large
  // projects. Eanch entity needs a unique name. A namespace allows for
  // identically named entities as long as the namespace ate different.

  int x = 0;
  // std::cout << x << std::endl;
  // int x = 1;

  std::cout << first::x << std::endl;
  using namespace second;
  std::cout << x << std::endl;
}
