#include <iostream>
#include "io.h"

int main(){

    int x = io::readNumber();
    int y = io::readNumber();

    io::writeAnswer(x + y);

    return 0;
}

