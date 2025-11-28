#include <iostream>


// Write the function getQuantityPhrase() here
std::string getQuantityPhrase(int quantity) {

	if (quantity < 0) {
		return "Negative";
	}
	else if (quantity == 0) {
		return "No";
	}
	else if (quantity == 1) {
		return "a single";
	}
	else if (quantity == 2) {
		return "a couple";
	}
	else if (quantity == 3) {
		return "a Few";
	}
	else {
		return "Many";
	}
}

// Write the function getApplesPluralized() here
std::string getApplesPluralized(int quantity) {
	return (quantity == 1) ? "apple" : "apples";
};

int main() {
	constexpr int maryApples{ 3 };
	std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

	std::cout << "How many apples do you have? ";
	int numApples{};
	std::cin >> numApples;

	std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

	return 0;
}