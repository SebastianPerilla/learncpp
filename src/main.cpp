#include <iostream>

int func(int value, int value1) { return value * value1; }

int func(double value, double value1) { return value * value1; }

int main() {
    // std::cout << func(1) << "\n";
    std::cout << func(1, 5);
    return 0;
}
