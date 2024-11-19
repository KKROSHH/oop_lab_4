#include <iostream>
#include <string>
#include <limits>

class Employee
{
    public:
        std::string name;
        int age;
        std::string position;

        Employee()
        {
            std::cout << "Enter employee's name: " << std::endl;
            getline(std::cin, name);

            std::cout << "Enter employee's age: " << std::endl;
            std::cin >> age;

            std::cout << "Enter employee's position: " << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(std::cin, position);

            std::cout << "Employee created (default constructor)" << std::endl;

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