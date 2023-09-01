#include <iostream>
#include <string>

void happyBirthday(std::string name, int age);

int main() {
  std::string name = "Adil";
  int age = 21;

  happyBirthday(name, age);
}

void happyBirthday(std::string name, int age) {
  std::cout << "Happy Birthday to " << name << std::endl;
  std::cout << "Happy Birthday to " << name << std::endl;
  std::cout << "Happy Birthday dear " << name << std::endl;
  std::cout << "Happy Birthday to " << name << std::endl << std::endl;
  std::cout << "Your are " << age << " years old" << std::endl;
}
