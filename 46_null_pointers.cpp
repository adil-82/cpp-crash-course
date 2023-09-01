#include <iostream>

// Null value = a special value that means something has no value.
// When a pointer is holding a null value, that pointer is not pointing at anything (null pointer)

// nullptr = keyword represents a null pointer literal

// nullptr are helful when determining if an addres was successfully assigned to a pointer

// Whene using pointers, be careful that your code isn't dereferecing nullptr or pointing to free memory
// THIS WILL CAUSE UNDEFINED BEHAVIER.

int main() {
  int *pointer = nullptr;
  int x = 123;

  pointer = &x;

  if (pointer == nullptr) {
    std::cout << "address was NOT assigned !" << std::endl;
  } else {
    std::cout << "address was assigned !" << std::endl;
    std::cout << *pointer << std::endl;
  }
}
