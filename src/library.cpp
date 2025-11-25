#include <string>
#include <iostream>

class Piano
{
private:
    int numberOfKeys;
    bool mechanical;
    std::string manufacturer;

public:
    Piano() 
    : numberOfKeys(88), 
    mechanical(true), 
    manufacturer ("Yamaha")
    {

        std::cout << "Constructor Called \n";
    }

    void keyGetter()
    {
        std::cout << numberOfKeys;
    }
};

int main()
{
    Piano mine;
    mine.keyGetter();

    return 0;
}