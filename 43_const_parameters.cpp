#include <iostream>
#include <ostream>
#include <string>
// const parameter = parameter thet is effectively read-olny
//                   conde is more sucure and conveys intent
//                   useful for references and pointers.

// void prinfInfo(std::string name, int age);
// void prinfInfo(const std::string name, const int age);
void prinfInfo(const std::string &name, const int &age);

int main() {
  std::string name = "Adil";
  int age = 21;

  prinfInfo(name, age);
}

// void prinfInfo(std::string name, int age) {
// void prinfInfo(const std::string name, const int age) {
void prinfInfo(const std::string &name, const int &age) {
  std::cout << "Name: " << name << std::endl << "Age: " << age << std::endl;
  name = " ";
  age = 0;
  std::cout << "Name: " << name << std::endl << "Age: " << age << std::endl;
}
