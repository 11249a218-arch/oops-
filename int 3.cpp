#include <stdio.h>

// Define a structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

// Function to add two complex numbers and return a structure
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;  // returning structure
}

int main() {
    struct Complex num1, num2, sum;

    // Input two complex numbers
    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Function call (returns structure)
    sum = addComplex(num1, num2);

    // Display result
    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
