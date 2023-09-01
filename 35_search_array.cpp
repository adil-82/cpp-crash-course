#include <iostream>

// int searchArray(int numbers[], int size, int myNum);
int searchArray(int array[], int size, int element);

int main() {
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(int);
  // int size = sizeof(numbers) / sizeof(numbers[0]);
  int index, myNum;

  std::cout << "Enter element to search for: " << std::endl;
  std::cin >> myNum;

  index = searchArray(numbers, size, myNum);

  if (index != -1) {
    std::cout << myNum << " is at index " << index << std::endl;
  } else {
    std::cout << myNum << " is not in the array !" << std::endl;
  }
  return 0;
}

int searchArray(int array[], int size, int element) {
  // int searchArray(int numbers[], int size, int myNum) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      // if (numbers[i] == myNum) {
      return i;
    }
  }
  return -1; // serves as a sentinel value.
}
