#include "io.h"
#include <iostream>

Card::Sebas peris;
int calculate(int a, int b) { return a + b; };

void printName(std::string name) {
  std::cout << "Current Info: \n";
  std::cout << "Name: " << name << "\n";
  std::cout << "Height: 182cm\n";
};

int main() {
  std::cout << "Practice: ";
  std::cout << calculate(1, 2);
  printName("Sebastian");
  peris.print("Sebastian");
  return 0;
}
