#include <ctype.h>
#include <iostream>
#include <string>

int main() {
  std::string questions[] = {
      "1. What year was C++ created?: ", "2. Who invented C++?: ",
      "3. What is the predecessor of C++?: ", "4. Is the Earth flat?: "};

  std::string options[][4] = {
      {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
      {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Ca.."},
      {"A. C", "B. C+", "C. C--", "D. B++"},
      {"A. yes", "B. no", "C. sometimes", "D. what's Earth?"}};

  char answerkey[] = {'C', 'B', 'A', 'B'};

  int size = sizeof(questions) / sizeof(questions[0]);
  char guess;
  int score;

  for (int i = 0; i < size; i++) {
    std::cout << "*************************" << std::endl;
    std::cout << questions[i] << std::endl;
    std::cout << "*************************" << std::endl;

    for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++) {
      std::cout << options[i][j] << std::endl;
    }

    std::cin >> guess;
    guess = toupper(guess);

    if (guess == answerkey[i]) {
      std::cout << "Correct !" << std::endl;
      score++;
    } else {
      std::cout << "Wrong !" << std::endl;
      std::cout << "Answer: " << answerkey[i] << std::endl;
    }
  }

  std::cout << "*************************" << std::endl;
  std::cout << "*        RESULTS        *" << std::endl;
  std::cout << "*************************" << std::endl;
  std::cout << "Correct Guesses: " << score << std::endl;
  std::cout << "N° of Questions: " << size << std::endl;
  std::cout << "Score: " << (score/(double)size)*100 << " %" << std::endl;
}
