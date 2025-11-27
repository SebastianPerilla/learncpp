#include <iostream>




int main() {

	std::cout << (true ? static_cast<unsigned int>(-1) : 2u );

	return 0;
}