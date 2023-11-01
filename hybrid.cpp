#include <iostream>

class Student {
protected:
    std::string name;
    int prn;

public:
    Student(const std::string& n, int p) : name(n), prn(p) {}
};

class UT_Marks : public Student {
protected:
    int utScore;

public:
    UT_Marks(const std::string& n, int p, int ut) : Student(n, p), utScore(ut) {}
};

class Sports : public Student {
protected:
    int sportsScore;

public:
    Sports(const std::string& n, int p, int sports) : Student(n, p), sportsScore(sports) {}
};

class Result : public UT_Marks, public Sports {
public:
    Result(const std::string& n, int p, int ut, int sports)
        : UT_Marks(n, p, ut), Sports(n, p, sports) {}

    void displayResult() {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "PRN: " << prn << std::endl;
        std::cout << "UT Marks: " << utScore << std::endl;
        std::cout << "Sports Score: " << sportsScore << std::endl;
    }
};

int main() {
    Result studentResult("Alice", 2021, 85, 70);
    studentResult.displayResult();

    return 0;
}
