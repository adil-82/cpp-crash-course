#include <iostream>
#include <string>

int main() {
  // foreach loop = loop that eases the traversal over an iterable data set

  std::string students[] = {"Adil", "Soufian", "Zakaria", "Ijlal", "abdellah"};
  int grades[] = {65, 74, 81, 93};

  for (std::string student : students) {
    std::cout << student << std::endl;
  }

  for(int grade : grades)
  {
    std::cout << grade << std::endl;
  }
}
