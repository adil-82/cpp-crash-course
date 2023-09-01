#include <iostream>
#include <string>

int main() {
  // sizeof() = determines the size in bytes of a:
  //             variable, data type, classn objects, etc...

  double gpa = 2.5;
  std::cout << "Size of 'double': " << sizeof(gpa) << " bytes" << std::endl;

  std::string name = "Adil";
  std::cout << "Size of 'string': " << sizeof(name) << " bytes" << std::endl;

  char grade = 'F';
  std::cout << "Size of 'char': " << sizeof(grade) << " bytes" << std::endl;

  bool student = true;
  std::cout << "Size of 'boolean': " << sizeof(student) << " bytes"
            << std::endl;

  char grades[] = {'A', 'B', 'C', 'D', 'F'};
  // std::cout << "Grades contains: " << sizeof(grades) / sizeof(grades[0])
  std::cout << "Grades contains: " << sizeof(grades) / sizeof(char)
            << " elements" << std::endl;

  std::string students[] = {"Adil", "Soufian", "Zakaria", "Ijlal", "abdellah"};
  // std::cout << "Students contains: " << sizeof(students) / sizeof(students[0])
  std::cout << "Students contains: " << sizeof(students) / sizeof(std::string)
            << " elements" << std::endl;
}
