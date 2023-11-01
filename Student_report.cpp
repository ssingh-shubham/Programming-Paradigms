#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int rollNumber;
    int marks1;
    int marks2;
    int marks3;
    float totalMarks;
    float percentage;
    char grade;

public:
    void inputStudentDetails() {
        std::cout << "Enter student name: ";
        std::cin >> name;
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        std::cout << "Enter marks in subject 1: ";
        std::cin >> marks1;
        std::cout << "Enter marks in subject 2: ";
        std::cin >> marks2;
        std::cout << "Enter marks in subject 3: ";
        std::cin >> marks3;
    }

    void calculateTotalAndPercentage() {
        totalMarks = marks1 + marks2 + marks3;
        percentage = (totalMarks / 300) * 100;
    }

    void calculateGrade() {
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 80) {
            grade = 'B';
        } else if (percentage >= 70) {
            grade = 'C';
        } else if (percentage >= 60) {
            grade = 'D';
        } else if (percentage >= 40) {
            grade = 'E';
        } else {
            grade = 'F';
        }
    }

    void displayStudentDetails() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks in Subject 1: " << marks1 << std::endl;
        std::cout << "Marks in Subject 2: " << marks2 << std::endl;
        std::cout << "Marks in Subject 3: " << marks3 << std::endl;
        std::cout << "Total Marks: " << totalMarks << std::endl;
        std::cout << "Percentage: " << percentage << "%" << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }
};

int main() {
    Student student;

    student.inputStudentDetails();
    student.calculateTotalAndPercentage();
    student.calculateGrade();
    student.displayStudentDetails();

    return 0;
}
