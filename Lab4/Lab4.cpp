#include <iostream>
#include <string>
#include <limits>

class Employee
{
    private:
        std::string name;
        int age;
        std::string position;

    public:
        Employee()
        {
            for (;;) {
        std::cout << "Enter employee's name: " << std::endl;
        getline(std::cin, name);

        if (name.empty()) {
            std::cout << "Error: Name cannot be empty. Please try again.\n";
            continue;
        }

        std::cout << "Enter employee's age: " << std::endl;
        std::cin >> age;

        if (std::cin.fail() || age < 18 || age > 65) {
            std::cout << "Error: Invalid age. Age must be between 18 and 65. Please try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter employee's position: " << std::endl;
        getline(std::cin, position);

        if (position.empty()) {
            std::cout << "Error: Position cannot be empty. Please try again.\n";
            continue;
        }
        
        std::cout << "New employee created successfully!" << std::endl;
        break;

    }
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