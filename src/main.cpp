#include <iostream>

bool isAllowedToTakeFunRide(){
    std::cout << "What is your height?: ";
    double height;
    std::cin >> height;
    
    return height >= 140.0;
}

int main(){
    if (isAllowedToTakeFunRide()){
        std::cout << "Have Fun!" << std::endl;
    } else {
        std::cout << "Sorry you are too short";
    }

    // This is how we van work with the return staments as best as possible 

    return 0;
}