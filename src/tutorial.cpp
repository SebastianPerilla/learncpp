#include <iostream>
#include <string>

class Person {
    public:
        // pure virtual functions
        virtual void setAge(int newAge) = 0;
        virtual void getAge() = 0;
        virtual void getLine() = 0;

        virtual ~Person() = default;
};

class Sebas : public Person {
    private:
        int age { 0 };
        std::string line { "Perilla" };

    public:
        Sebas(int age) {
            setAge(age);
            getAge();
        };

        void setAge(int newAge) override { age = newAge; }

        void getAge() override { std::cout << "Sebas age " << age << "\n"; }

        void getLine() override { std::cout << line << "\n"; }
};

int main(int argc, char *argv[]) {

    Sebas sebas(std::stoi(argv[2]));

    return 0;
}
