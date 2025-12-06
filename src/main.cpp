#include <iostream>

int main()
{ 
    static int x{10};

    std::cout << "Using Internal Linkage!: ";
    std::cout << x;

    return 0;
} 