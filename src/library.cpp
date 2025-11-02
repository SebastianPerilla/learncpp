#include "library.h"
#include <iostream>
#include <random>
#include <vector>

namespace library
{
    int randomGeny()
    {
        std::random_device rd;
        auto seed = rd();                              // Seed Constructor
        std::mt19937 gen(seed);                        // Mersenne Twister
        std::uniform_int_distribution<int> dis(5, 12); // Distribution

        return dis(gen);
    }

    std::vector<int> recursiveRandomFunc(int inputAmount, int randGenerator, std::vector<int> inpVector = {})
    {

        if (inpVector.size() != inputAmount)
        {
            // std::cout << "Current size of Vector: " << inpVector.size() << std::endl;
            inpVector.push_back(randGenerator);
            return recursiveRandomFunc(inputAmount, randomGeny(), inpVector);
        }
        else
        {
            // std::cout << "Achieved targeted Size: " << inpVector.size() << std::endl;
            std::cout << "Random Vector\n";
            for (auto i : inpVector)
            {
                std::cout << i << ", ";
            }

            return inpVector;
        }
    }

    int produceResult(std::vector<int> list)
    {
        int result = 0;
        for (auto &i : list)
        {
            result += i;
        }
        std::cout << "= " << result << std::endl;
        return result;
    }

    void makeHist(std::vector<int> randomVector)
    {

        std::string histBar = "|";

        for (auto j : randomVector)
        {
            std::string count = "";
            for (int i = 0; i < j; i++)
            {
                count += histBar;
            }
            std::cout << count << std::endl;
        }
    }

}
