#include<iostream>
using namespace std;
class book
{
private:
int acc no,pages;
char BookName[50],Author[50],ISB No[50];
float price;
public;
void get book details()
{
    cout<<"Enter Book Name:";
    cin>>Book Name;
    cout<<"Author";
    cin>>Author;
    cout<<"ISB No:";
    cin>>ISB No;
    cout<<"Acess No:";
    cin>>acc no;
    cin>>"NO.of pages;
    cin>>pages;
    cout<<"price of book";
    cin>>price;
}
void display book()
{
cout<<"Book Name:"<<Book Name;
cout<<"Author:"<<Author;
cout<<"ISB No:"<<ISB No;
cout<<"No.of pages:"<<pages
cout<<"price:"<<price;
}
};
int main()
{
Book b;
b.get book details();
b.display book();
return 0;
}
    