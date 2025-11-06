#include <stdio.h>

// Define an inline function to add two numbers
inline int add(int a, int b) {
    return a + b;
}

// Another inline function for multiplication
inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nSum = %d", add(x, y));
    printf("\nProduct = %d\n", multiply(x, y));

    return 0;
}
