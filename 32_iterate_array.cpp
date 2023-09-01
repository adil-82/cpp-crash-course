#include <iostream>
#include <string>

int main() {

  std::string students[] = {"Adil", "Soufian", "Zakaria", "Ijlal", "abdellah"};

  for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
    std::cout << students[i] << std::endl;
  }
}
