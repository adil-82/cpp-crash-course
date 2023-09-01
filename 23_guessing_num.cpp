#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
  int num, guess, tries;

  srand(time(NULL));
  num = (rand() % 10) + 1;
  std::cout << "********* GUESS NUMBER ! *********" << std::endl;

  do
  {
    std::cout << "Enter a guess between (1-10): ";
    std::cin >> guess;
    tries++;

    if (guess > num) {
      std::cout << "Too high !" << std::endl;
    } else if (guess < num) {
      std::cout << "Too low !" << std::endl;
    } else {
      std::cout << "You win ! # of tries: " << tries << std::endl;
    }
  } while(guess != num);

  std::cout << "**********************************" << std::endl;
}
