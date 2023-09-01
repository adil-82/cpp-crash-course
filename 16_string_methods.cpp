#include <iostream>
#include <string>

int main() {
  std::string name;

  std::cout << "Enter your name: " << std::endl;
  std::getline(std::cin, name);

  int space = name.find(' ');
  if (name.empty()) {
    std::cout << "You didn't enter your name !" << std::endl;
  } else if (name.length() > 12) {
    std::cout << "Your name can't be over 12 charactars!" << std::endl;
  } else {
    std::cout << "Welcome " << name.erase(space, 12) << std::endl;
    // name.clear();
  }
  // std::cout << "Welcome " << name.erase(space, 12) << std::endl;
  // name.append("@gmail.com");
  // std::cout << "Your username is now " << name << std::endl;

  // std::cout << name.at(1) << std::endl;
  // std::cout << name.insert(0, "@") << std::endl;
  // std::cout << name.find(' ') << std::endl;
  // std::cout << name.erase(0, 3) << std::endl;
}
