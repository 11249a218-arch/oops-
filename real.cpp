#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
       Complex operator + (const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator - (const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }
    Complex operator * (const Complex& c) const {
        return Complex(real * c.real - imag * c.imag,
                       real * c.imag + imag * c.real);
    }
};
int main() {
    double r1, i1, r2, i2;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;
    Complex c1(r1, i1), c2(r2, i2);
    cout << "\nFirst Complex number: ";
    c1.display();
    cout << "Second Complex number: ";
    c2.display();
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    cout << "\nSum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    cout << "Product: ";
    prod.display();
    return 0;
}

