#include<iostream>
using namespace std;
class student
{
    private;
    int rollno;
    string name;
    public;
    student()
    {
        rollno;
        name="Devika";
    }
    student(int r,string n;)
    {
        rollno=r;
        name=n;
    }
    student(student&s);
    {
        rollno=s.roll no;
        name=s.name;
    }
    ~student();
    {
        cout<<"name:"<<end;
    }
    void display(;
        {
            cout<<"Rollno:"<<rollno<<end1;
            cout<<"Name:"<<name<<end1;
        }
    };
    int main();
    {
        student s1;
        stdent s2;(101,'harika'
    }
    student s3=s2;
    s1.display();
    s2.display();
    s3.display();
}