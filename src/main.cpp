#include <iostream>
#include <vector>
#include <random>

int randomGeny()
{
    std::random_device rd;
    auto seed = rd();                             // Seed Constructor
    std::mt19937 gen(seed);                       // Mersenne Twister
    std::uniform_int_distribution<int> dis(1, 6); // Distribution
    // std::cout << dis(gen) << std::endl;

    return dis(gen);
}

std::vector<int> recursiveRandomFunc(int inputAmount, int randGenerator, std::vector<int> inpVector = {})
{

    if (inpVector.size() != inputAmount)
    {
        std::cout << "Current size of Vector: " << inpVector.size() << std::endl;
        inpVector.push_back(randGenerator);
        return recursiveRandomFunc(inputAmount,
                                   randomGeny(),
                                   inpVector);
    }
    else
    {
        std::cout << "Achieved targeted Size: " << inpVector.size() << std::endl;
        return inpVector;
    }
}

int main()
{
    // Using the Default Arguments to not fill the last argument in the Function
    auto vec = recursiveRandomFunc(10, randomGeny());

    std::cout << "Random Vector\n";
    for (auto i : vec)
    {
        std::cout << i << " ";
    }

    return 0;
}