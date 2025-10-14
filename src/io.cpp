#include <iostream>
#include "io.h"

namespace io {
    int readNumber() {
        std::cout << "Please Enter an integer: ";
        int x;
        std::cin >> x;
        return x;
    }

    void writeAnswer(int answer){
        std::cout << "The Answer is: " << answer << '\n';
    }

}