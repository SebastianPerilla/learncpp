#include <iostream>
#include <typeinfo>
int main() {
    auto x { 2 + 3.5 };
    std::cout << typeid(x).name();
    return 0;
}
