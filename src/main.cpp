#include <iostream>
#include <vector>
#include <random>
#include "library.h"
#include <string>

// std::vector<int> histogram () {

// }

int main()
{
    // Using the Default Arguments to not fill the last argument in the Function
    int randomGenerator = library::randomGeny();
    auto vec = library::recursiveRandomFunc(10, randomGenerator, {});
    std::cout << std::endl;

    library::makeHist(vec);

    library::produceResult(vec);

    return 0;
}