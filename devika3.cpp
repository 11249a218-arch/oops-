#include <iostream>
using namespace std;
class student
{
private 
int roll no;
string name;
public:
student()
{
roll no=1;
name="Devika";
}
student(int r,string n)
{
roll no=r;
name=n;
}
student (student&s)
{
roll no=s.roll no;
name=s.name;
}
student()
{
cout<<"name:"<<end;
}
void display()
{
    cout<<"Roll no:"<<roll no<<end;
    cout<<"Name:"<<name<<end;
}
};
int main()
{
student s1;
student s2;(10,"harika");
student s3=s2;
s1.display();
s2.display();
s3.display();
}