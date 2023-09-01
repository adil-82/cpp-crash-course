#include <iostream>
#include <string>

// 1. Double every second digit from right to left.
// If doubled number is 2 digits, split them
// 2. Add all single digits from step 1.
// 3. Add all odd nmbered digits from right to left
// 4. Sum results from steps 2 and 3.
// 5. If step 4 is divisble by 10, N° is valid.

int sumEvenDigits(const std::string cardNumber);
int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);

int evenDigits(const std::string cardNumber);
int oddDigits(const std::string cardNumber);

int main() {
  std::string cardNumber;
  int result = 0;

  std::cout << "Enter a credit card N°: " << std::endl;
  std::cin >> cardNumber;

  evenDigits(cardNumber);
  oddDigits(cardNumber);

  // 4. Sum results from steps 2 and 3.
  // result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);
  result = evenDigits(cardNumber) + oddDigits(cardNumber);

  // 5. If step 4 is divisble by 10, N° is valid.
  if (result % 10 == 0) {
    std::cout << cardNumber << " is valid !" << std::endl;
  } else {
    std::cout << cardNumber << " is NOT valid !" << std::endl;
  }

  return 0;
}

// If doubled number is 2 digits, split them
int getDigit(const int number) { return number % 10 + (number / 10 % 10); }

// 1. Double every second digit from right to left.
int sumEvenDigits(const std::string cardNumber) {
  int sum = 0;
  for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
    // 2. Add all single digits from step 1.
    sum += getDigit((cardNumber[i] - '0') * 2);
  }
  return sum;
}

// 3. Add all odd nmbered digits from right to left
int sumOddDigits(const std::string cardNumber) {
  int sum = 0;
  for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
    sum += cardNumber[i] - '0';
  }
  return sum;
}

int evenDigits(const std::string cardNumber) {
  std::cout << "1.1 every second digit from right to left : " << std::endl;
  for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
    // std::cout << cardNumber[i] << " ";
    std::cout << getDigit(cardNumber[i] - '0') << " ";
  }
  std::cout << std::endl;

  std::cout << "1.2 double every second digit from right to left : " << std::endl;
  for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
    std::cout << getDigit(cardNumber[i] - '0') * 2 << " ";
    // std::cout << getDigit((cardNumber[i] - '0') * 2) << " ";
  }
  std::cout << std::endl;

  std::cout << "1.3 If doubled number is 2 digits, split them : " << std::endl;
  for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
    // std::cout << getDigit(cardNumber[i] - '0') * 2 << " ";
    std::cout << getDigit((cardNumber[i] - '0') * 2) << " ";
  }
  std::cout << std::endl;

  std::cout << "2. Add all single digits from step 1 : " << " ";
  int sum = 0;
  for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
    sum += getDigit((cardNumber[i] - '0') * 2);
  }
  std::cout << sum << std::endl;
  return 0;
}

int oddDigits(const std::string cardNumber) {
  std::cout << "3.1 every odd digit from right to left : " << std::endl;
  for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
    std::cout << cardNumber[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "3.2 add all odd digit from right to left : " << " ";
  int sum = 0;
  for (int i = cardNumber.size() - 1; i >= 0; i -= 2) {
    sum += cardNumber[i] - '0';
  }
  std::cout << sum << std::endl;

  return 0;
}

