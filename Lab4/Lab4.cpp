#include <iostream>
#include <string>

class Employee
{
    public:
        std::string name;
        int age;
        std::string position;

        Employee()
        {
            std::cout << "Enter employee's name: " << name <<std::endl;
            std::cin >> name;

            std::cout << "Enter employee's age: " << name <<std::endl;
            std::cin >> age;

            std::cout << "Enter employee's position: " << name <<std::endl;
            std::cin >> position;
        }

        void print() {
            std::cout << "Name: " << name <<std::endl;
            std::cout <<"Age: " << age <<std::endl;
            std::cout <<"Position: " << position <<std::endl;
        }
};

int main() {
    Employee john;

    Employee bob;
    Employee leah;

    john.print();
    std::cout<< "\n";
    bob.print();
    std::cout<< "\n";
    leah.print();
}