#include <iostream>

class MyBool {
private:
    bool value;

public:
    MyBool(bool val) : value(val) {}

    // Overload the unary logical NOT (!) operator
    bool operator!() {
        return !value;
    }

    bool getValue() {
        return value;
    }
};

int main() {
    bool input;
    std::cout << "Enter a boolean value (1 or 0): ";
    std::cin >> input;

    MyBool myBool(input);

    std::cout << "Original Value: " << myBool.getValue() << std::endl;
    std::cout << "Logical NOT (!) Result: " << !myBool << std::endl;

    return 0;
}
