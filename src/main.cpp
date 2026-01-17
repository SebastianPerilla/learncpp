
// #include <chrono>
#include <iostream>
#include <random>

int pickRandNum() {
    std::random_device rd {};
    // std::seed_seq ss { static_cast<std::seed_seq::result_type>(
    //     std::chrono::steady_clock::now().time_since_epoch().count()) };
    std::mt19937 mt { rd() };
    std::uniform_int_distribution num { 1, 100 };
    return num(mt);
}

void game(int trueNum) {

    int turn { 1 };

    while (turn < 7) {
        std::cout << "Guess #" << turn << ": ";
        int guess {};
        std::cin >> guess;

        if (guess == trueNum) {
            std::cout << "Correct!";
            break;
        }

        if (guess > trueNum) {
            std::cout << "Your guess is too high.\n";
            ++turn;
        } else if (guess < trueNum) {
            std::cout << "Your guess is too low.\n";
            ++turn;
        }
    }
}

bool playAgain() {
    while (true) {
        std::cout << "\nWould you like to play again (y/n)? ";
        char choice {};
        std::cin >> choice;

        switch (choice) {
        case 'y':
            return true;
        case 'n':
            return false;
        }
    }
}

int main() {
    std::cout
        << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    do {
        game(pickRandNum());
    } while (playAgain());

    std::cout << "Thank you for playing!\n";
    return 0;
}
