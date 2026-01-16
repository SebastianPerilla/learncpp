#include <iostream>
// Pointer and references!
int main() {
    int r = 10;
    int *p = &r;

    *p += 10;

    std::cout << "Pointer P: " << p << "\n";
    std::cout << "Dereference of P: " << *p << "\n";

    std::cout << "Address R: " << &r << "\n";
    std::cout << "Value of R: " << r << "\n";
    return 0;
}
