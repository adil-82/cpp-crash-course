#include <iostream>

// void printNum(int myNum);
void printNum();

int myNum = 3;

int main() {
  // Local variables = declared inside a function or block {}
  // Global variables = declared outside of all functions

  int myNum = 1;
  std::cout << myNum << std::endl; // Local variables
  std::cout << ::myNum
            << std::endl; // scope resolution operator: Global variables
  printNum();
}

// void printNum(int myNum) {
void printNum() {
  int myNum = 2;
  std::cout << myNum << std::endl;   // Local variables
  std::cout << ::myNum << std::endl; // Global variables
}
