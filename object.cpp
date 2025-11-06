#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    int bookID;
    string title;
    string author;
    float price;
public:
    void getDetails() {
        cout << "\nEnter Book ID: ";
        cin >> bookID;
        cin.ignore(); // clear input buffer
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Book Price: ";
        cin >> price;
    }
    void showDetails() const {
        cout << "\nBook ID: " << bookID;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPrice: ₹" << price << endl;
    }
};
int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    // Declare an array of objects
    Book books[100];  

    // Input details for each book
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of book " << i + 1 << ":\n";
        books[i].getDetails();
    }
    // Display details for all books
    cout << "\n--- Library Book Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << " details:";
        books[i].showDetails();
    }
    return 0;
}
