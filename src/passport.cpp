#include <iostream>
#include <string>

class Passport
{
private:
	int monthsTillExpiry;
	std::string name;
	std::string passportNumber;

public:
	Passport()
		: monthsTillExpiry(10),
		  name("Sebastian Perilla"),
		  passportNumber("A1234567")
	{
	}

	void passGetter()
	{
		std::cout << "Months Till Expiry: " << monthsTillExpiry << "\n";

		std::string_view name1{name};
		std::cout << "Name: " << name1 << "\n";

		std::string_view passportNumber1(passportNumber);
		std::cout << "Number: " << passportNumber1 << "\n";
	}

	void passNameSetter()
	{
		std::cout << "New Name: ";
		std::string nameNew{};
		std::getline(std::cin >> std::ws, nameNew);
		name = nameNew;

		std::cout << "New Passport Number: ";
		std::string numberNew{};
		std::getline(std::cin >> std::ws, numberNew);
		passportNumber = numberNew;
	}
};

int main()
{
	Passport passport;

	passport.passGetter();

	std::cout << "Do you want to Change the Passport Name and Number?(y/n): ";

	std::string changePassQuestion{};
	std::cin >> changePassQuestion;

	if (changePassQuestion == "y")
	{
		passport.passNameSetter();
		std::cout << "\n";
		passport.passGetter();
	}
	else
	{
		std::cout << "All Goodie, you will be notified when the passport expiry is almost up!";
	}

	return 0;
}
