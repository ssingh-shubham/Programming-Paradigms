#include <iostream>
#include <string>

class PersonalInfo {
protected:
    std::string name;
    int age;

public:
    void readPersonalInfo() {
        std::cout << "Enter employee name: ";
        std::cin >> name;
        std::cout << "Enter employee age: ";
        std::cin >> age;
    }

    void printPersonalInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
    }
};

class EmploymentInfo {
protected:
    std::string department;
    int employeeId;

public:
    void readEmploymentInfo() {
        std::cout << "Enter department: ";
        std::cin >> department;
        std::cout << "Enter employee ID: ";
        std::cin >> employeeId;
    }

    void printEmploymentInfo() {
        std::cout << "Department: " << department << std::endl;
        std::cout << "Employee ID: " << employeeId << std::endl;
    }
};

class Employee : public PersonalInfo, public EmploymentInfo {
public:
    void readEmployeeInfo() {
        readPersonalInfo();
        readEmploymentInfo();
    }

    void printEmployeeInfo() {
        printPersonalInfo();
        printEmploymentInfo();
    }
};

int main() {
    Employee emp;

    std::cout << "Enter Employee Information:" << std::endl;
    emp.readEmployeeInfo();

    std::cout << "\nEmployee Information:" << std::endl;
    emp.printEmployeeInfo();

    return 0;
}
