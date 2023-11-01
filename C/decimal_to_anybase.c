#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Function to convert a decimal number to any base
void decimalToBase(int decimalNumber, int base) {
    int remainder, quotient, i = 0;
    char baseNumber[100];

    quotient = decimalNumber;

    while (quotient != 0) {
        remainder = quotient % base;
        if (remainder < 10) {
            baseNumber[i] = remainder + '0';
        } else {
            baseNumber[i] = remainder + 55; // Convert to A-F for bases > 10
        }
        quotient = quotient / base;
        i++;
    }

    printf("Equivalent number in base %d: ", base);
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", baseNumber[j]);
    }
    printf("\n");
}

// Function to convert a number in any base to decimal
int baseToDecimal(char* number, int base) {
    int decimalNumber = 0;
    int power = 0;
    int length = strlen(number);

    for (int i = length - 1; i >= 0; i--) {
        int digit;
        if (number[i] >= '0' && number[i] <= '9') {
            digit = number[i] - '0';
        } else if (number[i] >= 'A' && number[i] <= 'F') {
            digit = number[i] - 55; // Convert A-F to 10-15
        } else {
            printf("Invalid character in the input.\n");
            return -1;
        }
        decimalNumber += digit * pow(base, power);
        power++;
    }

    return decimalNumber;
}

int main() {
    int choice;
    int decimalNumber;
    char number[100];
    int base;

    do {
        printf("Menu:\n");
        printf("1. Convert decimal to any base\n");
        printf("2. Convert any base to decimal\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a decimal number: ");
                scanf("%d", &decimalNumber);
                printf("Enter the base to convert to (2, 8, 16, etc.): ");
                scanf("%d", &base);
                decimalToBase(decimalNumber, base);
                break;

            case 2:
                printf("Enter a number in any base: ");
                scanf("%s", number);
                printf("Enter the base of the input number (2, 8, 16, etc.): ");
                scanf("%d", &base);
                int result = baseToDecimal(number, base);
                if (result != -1) {
                    printf("Equivalent decimal number: %d\n", result);
                }
                break;

            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}
