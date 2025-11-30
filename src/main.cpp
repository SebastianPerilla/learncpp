#include <iostream>

namespace perilla {

	namespace samu {
		void print(){
			std::cout << "20";
		};
	};

	namespace sebas {
		void print(){
			std::cout << "22";
		};	
	};

};


int main() {
	perilla::samu::print();
	std::cout << "\n";
	perilla::sebas::print();

	return 0;
}