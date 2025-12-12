#include <iostream>

int printNegativeNumber()
{
    int x{};
tryAgain:
    std::cout << "Enter a non-negative number: ";
    std::cin >> x;

    if (x < 0) {
        goto tryAgain;
    }
    return x;
}


int main()
{
    int x{ printNegativeNumber() };
    std::cout << "Positive Number: " << x;
    return 0;
}