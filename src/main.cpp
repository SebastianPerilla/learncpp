#include <iostream>
#include <random>

int main() {
    std::cout << "LearnC++ Practice: \n";

    std::mt19937 mt{};

    for (int count{1}; count <= 40; ++count) {
        std::cout << mt() << "/t";

        if (count % 5 == 0) {
            std::cout << "\n";
        }
    }

    return 0;
}
