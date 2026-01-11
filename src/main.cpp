#include <iostream>

void ternary(bool state){
  std::cout << (state?1:2);
  
}

int main() {
  bool state {false};
  ternary(state); 
	return 0;
}
