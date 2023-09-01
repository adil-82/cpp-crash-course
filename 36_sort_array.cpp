#include <iostream>

// bubble sort.

void sort(int array[], int size);

int main() {
  int array[] = {2, 5, 6, 1, 3, 7, 4, 9, 8, 10};
  int size = sizeof(array) / sizeof(int);

  sort(array, size);

  for (int el : array) {
    std::cout << el << " ";
  }
}

void sort(int array[], int size) {
  int temp;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      // if (array[j] > array[j + 1]) {
      if (array[j] < array[j + 1]) {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}
