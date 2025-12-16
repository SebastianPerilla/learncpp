#include <iostream>

int main()
{
  int lineCount{5};
  
  while (lineCount >= 1) {
    
    int count {lineCount};
    while (count >= 1) {
      std::cout << count-- << " ";
    }
    --lineCount;
    std::cout << "\n";
  }

  return 0;
}
