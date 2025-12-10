#include <iostream>

int accumulate(int x)
{
    static int result{ 0 };
    return result += x;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}

/*
Two Shortcomings of accumulate Extra Credit:
- Cannot be reset due to its static duration
- Cannot have multiple accumulators, as you will get unexpected answers if running together
*/