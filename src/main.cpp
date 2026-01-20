#include <iostream>
#include <string>

int main() {
    std::cout << "Testing\n";
    std::string getAttempt;
    std::getline(std::cin >> std::ws, getAttempt);
    std::cout << getAttempt << "\n";
    return 0;
}
