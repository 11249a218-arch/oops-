#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Addition of two integers: " << add(5, 10) << endl;
    cout << "Addition of two floats: " << add(4.5f, 3.2f) << endl;
    cout << "Addition of three integers: " << add(10, 20, 30) << endl;

    return 0;
}
