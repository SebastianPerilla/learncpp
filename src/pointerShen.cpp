#include <array>
#include <iostream>
#include <numeric>
#include <vector>

void memCheck() {
    std::vector<int> v(1000);
    // This will return the size of the vector,
    // which prints 24 bytes
    std::cout << "Vector: " << sizeof(v) << "\n";

    std::array<int, 1000> arr;
    // This will return the size of the array;
    std::cout << "Array: " << sizeof(arr) << "\n";
};

int sum_val(std::vector<int> elementList) {
    int result {};
    for (auto &x : elementList) {
        result += x;
    }
    return result;
};

int sum_ref(std::vector<int> &elementList) {
    int result {};
    for (auto &x : elementList) {
        result += x;
    }
    return result;
}

long long sum_ptr(const int *p, std::size_t n) {
    if (p == nullptr || n == 0) {
        return 0;
    }

    long long s { 0 };
    for (std::size_t i = 0; i < n; ++i) {
        s += p[i];
    }
    return s;
}

int main() {
    constexpr int size = 100;
    std::vector<int> v(size);         // A vector with 1000 elements
    std::iota(v.begin(), v.end(), 0); // Fill the vector with 0, 1, 2, 3, ...
    std::cout << sum_val(v) << std::endl;
    std::cout << sum_ref(v) << std::endl;
    v.clear();
    auto *ptr = v.data();
    // auto* ptr = &v[0]; // This is equivalent
    std::cout << sum_val(v) << std::endl;
    std::cout << sum_ptr(ptr, v.size()) << std::endl;

    return 0;
}
