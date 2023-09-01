#include <iostream>
#include <string>

// pointers = variable that stores a memory address of another variable
// sometimes it's easier to word with an address
// & address-of operator
// * dereference operator

int main() {

  std::string name = "Adil";
  int age = 21;
  std::string freePizzas[5] = {"pizza_1" ,"pizza_2" ,"pizza_3" ,"pizza_4" ,"pizza_5"};

  std::string *pName = &name;
  int *pAge = &age;
  // std::string *pFreePizzas = &freePizzas;
  std::string *pFreePizzas = freePizzas;

  std::cout << "pName: " << pName << std::endl;
  std::cout << "&name: " << &name << std::endl;

  std::cout << "*pName: " << *pName << std::endl;
  std::cout << "*pAge: " << *pAge << std::endl;
  std::cout << "*pFreePizzas: " << *pFreePizzas << std::endl;

}
