#include <iostream>

int main() {
  double miles;
  std::cout << "What is the distance in miles?\n";
  std::cin >> miles;

  double kilometres = miles * 1.609;

  std::cout << "It would be " << kilometres << "km.\n";
}
