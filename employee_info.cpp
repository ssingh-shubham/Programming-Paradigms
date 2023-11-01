#include <iostream>
#include <string>

class Employee {
public:
    std::string name;
    int yearOfJoining;
    double salary;
    std::string address;

    Employee(const std::string& empName, int year, double empSalary, const std::string& empAddress)
        : name(empName), yearOfJoining(year), salary(empSalary), address(empAddress) {}

    void displayInfo() {
        std::cout << name << " " << yearOfJoining << " " << address << std::endl;
    }
};

int main() {
    Employee employee1("Rahul", 2010, 0.0, "64C- WallsStreat");
    Employee employee2("Samar", 2000, 0.0, "68D- WallsStreat");
    Employee employee3("Ishita", 2018, 0.0, "26B- WallsStreat");

    // Display employee information
    std::cout << "Name Year of joining Address" << std::endl;
    employee1.displayInfo();
    employee2.displayInfo();
    employee3.displayInfo();

    return 0;
}
