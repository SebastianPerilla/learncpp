#include <iostream>
#include <string>

int main()
{
	/*
	Write a program that asks for the name and age of two people, then prints which person is older.

	Here is the sample output from one run of the program:

	Enter the name of person #1: John Bacon
	Enter the age of John Bacon: 37
	Enter the name of person #2: David Jenkins
	Enter the age of David Jenkins: 44
	David Jenkins (age 44) is older than John Bacon (age 37).
	*/

	std::cout << "Enter the name of person #1: ";
	
	std::string person1 {};
	std::cin >> person1;

	std::string_view p1 {person1};

	std::cout << "Enter the age of " << person1 << ": ";
	
	int person1Age {};
	std::cin >> person1Age;


	std::cout << "\nEnter the name of person #2: ";

	std::string person2 {};
	std::cin  >> person2;

	std::string_view p2 {person2};

	std::cout << "Enter the age of " << p2 << ": ";

	int person2Age {};
	std::cin >> person2Age;

	if (person1Age > person2Age) {
		std::cout << p1 << "(age " << person1Age << ") is older than " << p2 << "(age " << person1Age << ").";
		
	} else {
		std::cout << p2 << "(age " << person2Age << ") is older than " << p1 << "(age " << person2Age << ").";
	}
	
	return 0;
}