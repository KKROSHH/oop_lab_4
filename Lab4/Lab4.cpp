#include <iostream>
#include <string>

class Employee
{
    public:
        std::string name;
        int age;
        std::string position;

        void print() {
            std::cout << "Name: " << name <<std::endl;
            std::cout <<"Age: " << age <<std::endl;
            std::cout <<"Position: " << position <<std::endl;
        }
};

int main() {
    Employee john {"John", 28, "Manager"};

    Employee bob {"Bob", 34, "Accountant"};
    Employee leah {"Leah", 22, "Programmer"};

    john.print();
    std::cout<< "\n";
    bob.print();
    std::cout<< "\n";
    leah.print();
}