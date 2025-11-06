#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    char name[50];
    float marks;

public:
    // Function to input student details
    void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void displayData() {
        cout << "\nRoll Number: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Create array of Student objects
    Student students[100];  // assuming max 100 students

    // Input data for n students
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        students[i].getData();
    }

    // Display all student data
    cout << "\n--- Student Information ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nDetails of student " << i + 1 << ":";
        students[i].displayData();
    }

    return 0;
}
