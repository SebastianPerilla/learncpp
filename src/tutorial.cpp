#include <iostream>

int passByConstRef(const int &val) { return val + 2; }

int passByConstAddy(const int *val) { return *val + 5; }

int main() {

    int value = 10;
    std::cout << passByConstAddy(&value) << "\n";
    return 0;
}
