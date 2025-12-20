/* 
Write a program that converts from miles to kilometers 
1 mile = 1.609 kilometers
*/

#include <iostream>

double milesToKilo(int amount){
  double kilometers{1.609};
  return amount * kilometers;
}

int main() {
  std::cout << "Enter a number of miles: ";
  int x{};
  std::cin >> x;
  std::cout << milesToKilo(x) << " is the equivalent in kilometeres."<< "\n"; 
  return 0;
}
