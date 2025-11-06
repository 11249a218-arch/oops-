#include <iostream>
using namespace std;

class Height {
private:
    int feet;
    int inches;

public:
    // Constructor
    Height(int f = 0, int i = 0) {
        feet = f;
        inches = i;
        normalize();
    }

    // Function to normalize inches (e.g., 15 inches = 1 foot 3 inches)
    void normalize() {
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }

    // Display height
    void display() const {
        cout << feet << " feet " << inches << " inches";
    }

    // Overloading '>' operator
    bool operator>(const Height& h) const {
        if (feet > h.feet)
            return true;
        else if (feet == h.feet && inches > h.inches)
            return true;
        else
            return false;
    }

    // Overloading '<' operator
    bool operator<(const Height& h) const {
        if (feet < h.feet)
            return true;
        else if (feet == h.feet && inches < h.inches)
            return true;
        else
            return false;
    }

    // Overloading '==' operator
    bool operator==(const Height& h) const {
        return (feet == h.feet && inches == h.inches);
    }
};

// Main function
int main() {
    Height h1(5, 10);  // 5 feet 10 inches
    Height h2(6, 2);   // 6 feet 2 inches

    cout << "Height 1: ";
    h1.display();
    cout << endl;

    cout << "Height 2: ";
    h2.display();
    cout << endl;

    // Compare heights
    if (h1 > h2)
        cout << "\nHeight 1 is greater than Height 2";
    else if (h1 < h2)
        cout << "\nHeight 1 is smaller than Height 2";
    else if (h1 == h2)
        cout << "\nBoth heights are equal";

    cout << endl;
    return 0;
}
