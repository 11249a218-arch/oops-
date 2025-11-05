#include<iostream>
#include<iomanip>
using namespace std;
class slip
{
    private:
   int END,UAN,basicpay,DA,HRA,EPE,gpay,totded,netpay,ptax;
   string name,dept,design,bankon,PAN,IFSC;
   public;
   void get details()
   {
   cout<<"enter name:";
   cin>>name;
   cout<<"enter employenumber:";
   cin>>END;
   cout<<"enter department:";
   cin>>dept;
   cout<<"enter designation:";
   cin>>design;
   cout<<"enter pan:";
   cout<<PAN;
   cout<<"enter uan:";
   cin>>UAN;
   cout<<"enter bank no:";
   cin>>bank no;
   cout<<"enter basic pay:";
   cin>>basicpay;
   cout<<"enter IFSC code:";
   cin>>IFSC;
   }
   void calculate()
   {
    DA=basic pay/100*80;
    HRA=basicpay/100*10;
    EPF=(basic pay+DA)/100*12;
    gpay=basicpay/100*2;
    ptax=basicpay/100*2;
    totded=EPF+ptax;
    netpay=gpay totded;
   }
   void display();
   {
    cout<<"PAYSLIP"<<end1;
    cout<<"Name:"<<name<<end1;
    cout<<"Employee Number:"<<END<<end1;
    cout<<"Department:"<<dept<<end1;
    cout<<"designation:"<<design<<end1;
    cout<<"PAN no:"<<PAN,<end1;
    cout<<"UAN no"<<UAN<<end1;
    cout<<"Bank no:"<<bankno<<end1;
    cout<<"Basicpay:"<<basicpay<<end1;
    cout<<"Daily Allowance:"<<DA<<end1;
    cout<<"HouseRentAlolowance:"<<HRA<<end1;
    cout<<"Employee Provident Fund:"<<end1;
    cout<<"Professinal Tax:"<<Ptax<<end1;
    cout<<"Gpay:"<<gpay<<end1;
   }
};
int main()
{
    slip 3;
    s.get details();
    s.calculate();
    s.display();
}


   


   