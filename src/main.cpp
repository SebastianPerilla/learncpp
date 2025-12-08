#include <iostream>

void incrementAndPrint()
{
    static int value{ 1 }; // automatic duration by default
    ++value;
    std::cout << value << '\n';
} // value is destroyed here

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    return 0;
}


/*
What effect does using keyword static have on a global variable? 

Global Variables:
Static by default and make the variable have internal linkage (which it has by default)
meaning the variable cannot be exported to other files


What effect does it have on a local variable?
Changes the variable from automatic duration (meaning its duration is from the 
point of its defintion to the end of the block its in) to static (lasts from the beginning of 
the program until the end)
 


*/