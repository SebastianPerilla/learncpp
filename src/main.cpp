#include <iostream>

bool isAllowedToTakeFunRide(){
    std::cout << "What is your height?: ";
    double height;
    std::cin >> height;
    
    return height >= 140.0;
}

int main(){
    std::cout << "Testing out Escape Sequences";

    std::cout << "Trying out the \', now the \", now the \\ , now the \t, \? escape sequence";
    return 0;
}