#include <iostream>
#include <string>

// functions can share the same name but nedd a different set of parameters!

void bakePizza();
void bakePizza(std::string topping_1);
void bakePizza(std::string topping_1, std::string topping_2);

int main() {
  bakePizza();
  bakePizza("pepperoni");
  bakePizza("pepperoni", "mushroom");
}

void bakePizza() { std::cout << "Here is your Pizza !" << std::endl; };

void bakePizza(std::string topping_1) {
  std::cout << "Here is your " << topping_1 << " Pizza !" << std::endl;
};

void bakePizza(std::string topping_1, std::string topping_2) {
  std::cout << "Here is your " << topping_1 << " and " << topping_2
            << " Pizza !" << std::endl;
};
