#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    friend Complex operator+(const Complex& num1, const Complex& num2);

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

Complex operator+(const Complex& num1, const Complex& num2) {
    return Complex(num1.real + num2.real, num1.imag + num2.imag);
}

int main() {
    Complex num1, num2, result;
    
    std::cout << "Enter real and imaginary parts of the first complex number: ";
    std::cin >> num1.real >> num1.imag;
    
    std::cout << "Enter real and imaginary parts of the second complex number: ";
    std::cin >> num2.real >> num2.imag;
    
    result = num1 + num2;
    
    std::cout << "Result of addition: ";
    result.display();
    
    return 0;
}
