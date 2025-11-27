#include <iostream>

constexpr bool isEven(int value)
{
	return value % 2 == 0;
};

int main()
{

	std::cout << "Enter an integer: ";

	int value{};
	std::cin >> value;

	if (isEven(value) == true)
	{
		std::cout << value << " is even";
	}
	else
	{
		std::cout << value << " is odd";
	}

	return 0;
}