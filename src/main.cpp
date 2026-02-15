#include <iostream>

template <typename T, typename U>
auto sub(T a, U b) {
    return a - b;
}

int main() {
    std::cout << sub(3, 2) << '\n';
    std::cout << sub(3.5, 2) << '\n';
    std::cout << sub(4, 1.5) << '\n';

    return 0;
}
