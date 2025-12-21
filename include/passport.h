#pragma once
#include <vector>
#include <iostream>
#include <string>

namespace library
{
   int randomGeny();
   std::vector<int> recursiveRandomFunc(int inputAmount, int randomNumber, std::vector<int>);
   int produceResult(std::vector<int> randomVector);
   void makeHist(std::vector<int> randomVector);
}
