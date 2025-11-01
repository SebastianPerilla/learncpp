#include <iostream>
#include <vector>
#include <random>


int randomGeny () {
    std::random_device rd;
    auto seed = rd();                             // Seed Constructor
    std::mt19937 gen(seed);                       // Mersenne Twister
    std::uniform_int_distribution<int> dis(1, 6); // Distribution
    // std::cout << dis(gen) << std::endl;

    return dis(gen);
}

/* 
Write a function that takes a vector of 
numbers and returns the sum of all elements
*/

std::vector<int> recursiveRandomFunc(int inputAmount, int randGenerator = randomGeny(), std::vector<int> inpVector = {}) {

    if (inpVector.size() != inputAmount) {
        
        std::cout << "Current size of Vector: " << inpVector.size() << std::endl;
        inpVector.push_back(randGenerator);
        return recursiveRandomFunc(inputAmount, 
                                   randGenerator,
                                   inpVector);
    } else {
        std::cout << "Achieved targeted Size: " << inpVector.size() << std::endl;
        return inpVector;
    } 
}

int simpleRecursion(int amount, int desiredCount) {
    
    if (amount != desiredCount) {
        std::cout << "Current Amount: " << amount << std::endl;
        return simpleRecursion(amount - 1, desiredCount);
    } else {
        std::cout << "This is the result: " << amount << std::endl;
        return amount;
    }

}

int main()  {

    std::vector<int> emptyList = {};
    auto vec = recursiveRandomFunc(10, randomGeny());
    
    for (auto i : vec){
        std::cout << i << " ";
    }

    return 0;
}