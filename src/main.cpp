#include <iostream>


void swap(int trueSmaller, int trueLarger)
{
	std::cout << "The smaller value is " << trueSmaller;
	std::cout << "\nThe larger value is " << trueLarger;
}

int enterNum()
{
	int num{};
	std::cin >> num;

	return num;
}

int main()
{
	std::cout << "Enter an integer: ";
	int smaller{ enterNum() };

	std::cout << "Enter a larger integer: ";
	int larger{ enterNum() };

	if (smaller > larger) {
		std::cout << "Swapping values\n";
		swap(larger, smaller);
	}
	else {
		std::cout << "The smaller value is " << smaller;
		std::cout << "\nThe larger value is " << larger;

	}

	return 0;
}


/*
	The difference between a variables:
	- Scope: The block of code where a 
	         variable is accessible from.
	- Duration: The duration defines the rules that govern
				when a variable is created and destroyed 
	- Lifetime: The point of instantiation to the end of the
				scope where it is destroyed.


	By default what kind of scope 
	and duration do local variables have
	(and what do those mean)? 

		By default they have block scope, which means they can
		can be accessed from their point of definition to the 
		end of the block they are defined within.
		
		They also have automatic duration whic means they are 
		created at the point of definition, and are destroyed 
		at the end of the block in which they are defined.

*/