#include <iostream>

class Person {
protected:
    std::string name;

public:
    Person(const std::string& n) : name(n) {}
};

class Employee : public Person {
protected:
    int employeeId;

public:
    Employee(const std::string& n, int id) : Person(n), employeeId(id) {}

    void displayEmployee() {
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeId << std::endl;
    }
};

class Student : public Person {
protected:
    int studentId;

public:
    Student(const std::string& n, int id) : Person(n), studentId(id) {}

    void displayStudent() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Student ID: " << studentId << std::endl;
    }
};

int main() {
    Employee emp("John", 101);
    Student student("Alice", 202);

    emp.displayEmployee();
    student.displayStudent();

    return 0;
}
