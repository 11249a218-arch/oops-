#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex() : real(0), imag(0) {}

    // Parameterized constructor
    Complex(float r, float i) : real(r), imag(i) {}

    // Operator overloading for '+'
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.
