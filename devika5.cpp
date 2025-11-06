#include <iostream>
using namespace std;
class Book {
private:
    int bookID;
    char title[50];
    float price;
public:
    void getDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Book Price: ";
        cin >> price;
    }
    void displayDetails() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
    }
};
int main() {
    Book b1;
    b1.getDetails();
    b1.displayDetails();
    return 0;
}
