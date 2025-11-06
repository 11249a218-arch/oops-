#include <iostream>
using namespace std;

class Book {
private:
    int bookID;
    char title[50];
    float price;

public:
    // Function to input book details
    void getDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Book Price: ";
        cin >> price;
    }

    // Function to display book details
    void displayDetails() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
    }
};

int main() {
    // Create object of Book class
    Book b1;

    // Get and display book details
    b1.getDetails();
    b1.displayDetails();

    return 0;
}
