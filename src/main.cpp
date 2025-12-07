#include <iostream>

int main()
{ 
    static int x{10};

    std::cout << "Using Internal Linkage!: ";
    std::cout << x;

    return 0;
} 



/*
Scope: Where a variable is accessible
Duration: When a variable is created and destroyed
Linkage: whether the variable can be exported to another file or not.

Global Variables:
Scope: Global Accessible Everywhere
Duration: (static/internal linkage) so they terminate when the program terminates
Variables: can have both internal and external linkage (static vs extern keywords)
*/