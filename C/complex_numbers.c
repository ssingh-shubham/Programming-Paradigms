#include <stdio.h>

// Define a structure to represent a complex number
struct Complex {
    float real;
    float imaginary;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}

// Function to subtract two complex numbers
struct Complex subtractComplex(struct Complex num1, struct Complex num2) {
    struct Complex diff;
    diff.real = num1.real - num2.real;
    diff.imaginary = num1.imaginary - num2.imaginary;
    return diff;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;
    product.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    product.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    return product;
}

// Function to divide two complex numbers
struct Complex divideComplex(struct Complex num1, struct Complex num2) {
    struct Complex quotient;
    float denominator = num2.real * num2.real + num2.imaginary * num2.imaginary;
    quotient.real = (num1.real * num2.real + num1.imaginary * num2.imaginary) / denominator;
    quotient.imaginary = (num1.imaginary * num2.real - num1.real * num2.imaginary) / denominator;
    return quotient;
}

int main() {
    struct Complex number1, number2, result;

    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &number1.real, &number1.imaginary);

    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &number2.real, &number2.imaginary);

    // Addition
    result = addComplex(number1, number2);
    printf("Sum: %.2f + %.2fi\n", result.real, result.imaginary);

    // Subtraction
    result = subtractComplex(number1, number2);
    printf("Difference: %.2f + %.2fi\n", result.real, result.imaginary);

    // Multiplication
    result = multiplyComplex(number1, number2);
    printf("Product: %.2f + %.2fi\n", result.real, result.imaginary);

    // Division
    result = divideComplex(number1, number2);
    printf("Quotient: %.2f + %.2fi\n", result.real, result.imaginary);

    return 0;
}
