#include <iostream>
using namespace std;
class Employee {
private:
    int empID;
    char name[50];
    float basicSalary;
    float hra, da, pf, grossSalary, netSalary;
public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }
    void calculateSalary() {
        hra = 0.20 * basicSalary;   // House Rent Allowance = 20% of basic
        da  = 0.10 * basicSalary;   // Dearness Allowance = 10% of basic
        pf  = 0.08 * basicSalary;   // Provident Fund = 8% of basic
        grossSalary = basicSalary + hra + da;
        netSalary = grossSalary - pf;
    }
    void displayPayslip() {
        cout << "\n----------------------------------";
        cout << "\n           PAYSLIP";
        cout << "\n----------------------------------";
        cout << "\nEmployee ID     : " << empID;
        cout << "\nEmployee Name   : " << name;
        cout << "\nBasic Salary    : " << basicSalary;
        cout << "\nHRA (20%)       : " << hra;
        cout << "\nDA (10%)        : " << da;
        cout << "\nPF (8%)         : " << pf;
        cout << "\n----------------------------------";
        cout << "\nGross Salary    : " << grossSalary;
        cout << "\nNet Salary      : " << netSalary;
        cout << "\n----------------------------------\n";
    }
};

int main() {
    Employee emp;
    emp.getData();
    emp.calculateSalary();
    emp.displayPayslip();
    return 0;
}

