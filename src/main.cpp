#include <iostream>

int main() {
    std::cout << "Trying Lambdas\n";
    auto firstLambda = []() {
        for (int i { 0 }; i < 10; ++i) {
            std::cout << "Printing: " << i << "\n";
        }
    };
    firstLambda();
    return 0;
}
