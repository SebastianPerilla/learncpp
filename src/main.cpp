#include <iostream>
#include <string>

std::string getName()
{
	std::cout << "Enter your name: ";
	std::string name;
	std::getline(std::cin >> std::ws, name);
	return name;
}

int getAge()
{

	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;
	return age;
}

int main()
{
	getName();
	getAge();
	
	return 0;
}