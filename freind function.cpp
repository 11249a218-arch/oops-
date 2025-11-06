#include <iostream>
using namespace std;
class Box {
private:
    int length;
public:
    // Constructor to initialize length
    Box(int l) {
        length = l;
    }
    friend void printLength(Box b);
};
void printLength(Box b) {
    // Can access private member 'length' directly
    cout << "Length of the box: " << b.length << endl;
}
int main() {
    Box box1(1
    printLength(box1);
    return 0;
}
