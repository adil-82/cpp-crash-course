#include <iostream>

// dynamic memory = Memory that is allocated after the program is alredy
// compiled and running. Use the "new" operator to allocate memory in the heap
// rather than the stack.

// Useful when we don't know how mauch memory we will need.
// Makes our programs more flexible, especially when accepting user input.
// (we have no idea what the user is going to type in !!!)

int main() {
  // EXAMPLE 1:
  int *pNum =
      NULL; // good practice: declare pointer, not assign, give a NULL value

  pNum =
      new int; // to allocate memory in the heap rather than the stack
               // (enough space in the heap for one int)
               // the new operator will return an address.
               // We storing that address with "pNum" => it's a memory location

  *pNum = 21; // assign a value.

  std::cout << "Address: " << pNum << std::endl;
  std::cout << "Value: " << *pNum << std::endl;

  delete pNum;
}
