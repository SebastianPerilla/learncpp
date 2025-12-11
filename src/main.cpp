#include <iostream>

int calculate(int a, int b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default :
        std::cout << "Error, non valid operator";
        return 0;
    }

}


int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char op{};
    std::cin >> op;

    std::cout << calculate(x,y,op);
    return 0;
}


/*
    Write a function called calculate() that takes two integers and a char
    representing one of the following mathematical
    operations: +, -, *, /, or % (remainder).

    Use a switch statement to perform the appropriate mathematical
    operation on the integers, and return the result. If an invalid operator
    is passed into the function, the function should print an error message.

    For the division operator, do an integer division, and don’t worry
    about divide by zero.
*/