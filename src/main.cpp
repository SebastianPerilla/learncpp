#include <iostream>
#include <vector>
#include <random>
#include "library.h"

int main()
{
    // Using the Default Arguments to not fill the last argument in the Function
    int randomGenerator = library::randomGeny();
    auto vec = library::recursiveRandomFunc(10, randomGenerator, {});

    std::cout << "Random Vector\n";
    for (auto i : vec)
    {
        std::cout << i << ", ";
    }

    library::produceResult(vec);

    return 0;
}