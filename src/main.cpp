#include <iostream>
#include <string>
#include <vector>

struct User {
        std::string name;
        int *score; // heap allocated score

        User(const std::string &n, int s) : name(n) { score = new int(s); }
        ~User() { delete score; }
};

std::vector<User> loadUsers() {
    std::vector<User> users;
    users.reserve(3);

    users.push_back(User("Alice", 10));
    users.push_back(User("Bob", 20));
    users.push_back(User("Cara", 30));

    return users;
}

int totalScore(std::vector<User> users) { // takes by value
    int total = 0;
    for (auto u : users) { // copies each User
        total += *u.score;
    }
    return total;
}

int main() {
    auto users = loadUsers();

    std::cout << "Total: " << totalScore(users) << "\n";

    // update Bob
    for (auto u : users) {
        if (u.name == "Bob") {
            *u.score += 100;
        }
    }

    std::cout << "Total after update :" << totalScore(users) << "\n";
}
