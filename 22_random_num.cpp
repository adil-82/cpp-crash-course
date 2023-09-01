#include <iostream>
// #include <stdlib.h>
// #include <time.h>

int main() {
  srand(time(NULL));
  // int num = rand(); // betwin 0 & 32 767
  int num = ( rand() % 6 ) + 1; // betwin 1 & 6 
  std::cout << num << std::endl;
  return 0;
}
