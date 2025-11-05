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
    // Function to input book details
    void input() {
        cout << "\nEnter Book ID: ";
        cin >> bookID;
        cin.ignore(); // clear input buffer

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    // Function to display book details
    void display() const {
        cout << "\nBook ID   : " << bookID;
        cout << "\nTitle     : " << title;
        cout << "\nAuthor    : " << author;
        cout << "\nPrice     : $" << price << endl;
    }

    // Get book ID
    int getID() const {
        return bookID;
    }
};

int main() {
    Book library[50];  // array of book objects (max 50 books)
    int n;             // number of books
    int choice;

    cout << "Enter number of books to add: ";
    cin >> n;

    // Input book details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of book " << i + 1 << ":";
        library[i].input();
    }

    do {
        cout << "\n====== Library Menu ======";
        cout << "\n1. Display All Books";
        cout << "\n2. Search Book by ID";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n---- Library Book List ----";
            for (int i = 0; i < n; i++) {
                library[i].display();
                cout << "---------------------------";
            }

        } else if (choice == 2) {
            int id;
            cout << "\nEnter Book ID to search: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < n; i++) {
                if (library[i].getID() == id) {
                    cout << "\nBook Found!";
                    library[i].display();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "\nBook not found!";
        }

    } while (choice != 3);

    cout << "\nExiting program. Goodbye!\n";
    return 0;
}
