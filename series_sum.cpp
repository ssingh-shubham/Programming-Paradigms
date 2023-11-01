#include <iostream>

class SeriesSum {
private:
    double result;

public:
    SeriesSum() : result(0) {}

    // Constructor with parameters for calculating the sum of an arithmetic series
    SeriesSum(int n, double a, double d) {
        result = n * (2 * a + (n - 1) * d) / 2;
    }

    // Constructor with parameters for calculating the sum of a geometric series
    SeriesSum(int n, double a, double r, bool isGeometric) {
        if (isGeometric) {
            result = a * (1 - pow(r, n)) / (1 - r);
        } else {
            result = 0; // Invalid choice, result is set to 0
        }
    }

    double getSum() {
        return result;
    }
};

int main() {
    int choice, n;
    double a, d, r;

    std::cout << "Select the series type: " << std::endl;
    std::cout << "1. Arithmetic Series" << std::endl;
    std::cout << "2. Geometric Series" << std::endl;
    std::cin >> choice;

    std::cout << "Enter the number of terms (n): ";
    std::cin >> n;
    std::cout << "Enter the first term (a): ";
    std::cin >> a;

    if (choice == 1) {
        std::cout << "Enter the common difference (d): ";
        std::cin >> d;
        SeriesSum arithSum(n, a, d);
        std::cout << "Sum of the arithmetic series: " << arithSum.getSum() << std::endl;
    } else if (choice == 2) {
        std::cout << "Enter the common ratio (r): ";
        std::cin >> r;
        SeriesSum geomSum(n, a, r, true);
        std::cout << "Sum of the geometric series: " << geomSum.getSum() << std::endl;
    } else {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
