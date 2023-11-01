#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    // Prefix increment operator overloading
    Number& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment operator overloading
    Number operator++(int) {
        Number temp = *this;
        ++value;
        return temp;
    }

    // Binary operator overloading for addition
    Number operator+(const Number& other) {
        return Number(value + other.value);
    }

    // Binary operator overloading for less than comparison
    bool operator<(const Number& other) {
        return value < other.value;
    }

    // Display the value
    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    int choice;
    Number num1(5), num2(10);

    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Prefix Increment" << std::endl;
        std::cout << "2. Postfix Increment" << std::endl;
        std::cout << "3. Addition (+)" << std::endl;
        std::cout << "4. Less Than (<)" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                ++num1;
                std::cout << "Prefix Increment Result: ";
                num1.display();
                break;

            case 2:
                num2++;
                std::cout << "Postfix Increment Result: ";
                num2.display();
                break;

            case 3: {
                Number result = num1 + num2;
                std::cout << "Addition Result: ";
                result.display();
                break;
            }

            case 4:
                if (num1 < num2) {
                    std::cout << "num1 < num2" << std::endl;
                } else {
                    std::cout << "num1 >= num2" << std::endl;
                }
                break;

            case 5:
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
        }

    } while (choice != 5);

    return 0;
}
