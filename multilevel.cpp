#include <iostream>

class Student {
protected:
    int rollNo;

public:
    Student(int r) : rollNo(r) {}
};

class Marks : public Student {
protected:
    int marks;

public:
    Marks(int r, int m) : Student(r), marks(m) {}
};

class Result : public Marks {
public:
    Result(int r, int m) : Marks(r, m) {}

    void displayResult() {
        std::cout << "Roll Number: " << rollNo << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main() {
    Result studentResult(12345, 85);
    studentResult.displayResult();
    return 0;
}
