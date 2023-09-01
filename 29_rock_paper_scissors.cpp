#include <iostream>
#include <stdlib.h>
#include <time.h>

// Functions decorations:
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main() {
  char player, computer;
  player = getUserChoice();

  std::cout << "Your choice: ";
  showChoice(player);

  computer = getComputerChoice();

  std::cout << "Computer's choice: ";
  showChoice(computer);

  chooseWinner(player, computer);
}

// Define Functions:
char getUserChoice() {
  char player;
  std::cout << "*************************************************" << std::endl;
  std::cout << "  << GAME << Rock - Paper - Scissors >> GAME >>  " << std::endl;
  std::cout << "  << GAME <<  🪨  -   🧻  -     ✂️    >> GAME >>  " << std::endl;
  std::cout << "*************************************************" << std::endl;
  do {
    std::cout << "Choose one of the following: " << std::endl;
    std::cout << "'r' for 🪨\t'p' for 🧻\t's' for ✂️" << std::endl;
    std::cin >> player;
    // std::cout << player;
  } while (player != 'r' && player != 'p' && player != 's');
  // return 0;
  return player;
}

void showChoice(char choice) {
  switch (choice) {
  case 'r':
    // std::cout << "Rock" << std::endl;
    std::cout << "🪨" << std::endl;
    break;
  case 'p':
    std::cout << "🧻" << std::endl;
    break;
  case 's':
    std::cout << "✂️" << std::endl;
    break;
  }
}

char getComputerChoice() {
  srand(time(0));
  int num = rand() % 3 + 1;

  switch (num) {
  case 1:
    return 'r';
  case 2:
    return 'p';
  case 3:
    return 's';
  }
  return 0;
}

void chooseWinner(char player, char computer) {
  switch (player) {
  case 'r':
    if (computer == 'r') {
      std::cout << "It's a tie !" << std::endl;
    } else if (computer == 'p') {
      std::cout << "You lose !" << std::endl;
    } else {
      std::cout << "You win !" << std::endl;
    }
    break;
  case 'p':
    if (computer == 'p') {
      std::cout << "It's a tie !" << std::endl;
    } else if (computer == 's') {
      std::cout << "You lose !" << std::endl;
    } else {
      std::cout << "You win !" << std::endl;
    }
    break;
  case 's':
    if (computer == 's') {
      std::cout << "It's a tie !" << std::endl;
    } else if (computer == 'r') {
      std::cout << "You lose !" << std::endl;
    } else {
      std::cout << "You win !" << std::endl;
    }
    break;
  }
}
