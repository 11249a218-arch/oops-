include<iostream>
using namespace std;
class Ebbill 
{
    private:
    int customerid,units;
    char name[50],address[50];
    float amount;
    public:
    void getdata()
    {
        cout<<"Enter customer name:";
        cin>>name;
        cout<<"Enter address:";
        cin>> address;
        cout<<"Enter customer Id:";
        cin>>customerid;
        cout<<"Enter units:";
        cin>>units;
    }
        void calculate()
    {
        if (units<=100)
        amount=0;
        else if (units<=200)
        amount=(units-100)*2.25;
        else if (units<=400)
        amount=(100*2.25)+(100-200)*4.25;
        else if(units<=500)
        amount=(100*2.25)+(200*4.25)+(unit-400)*6.2;
        else
        amount=(100*2.25)+(200*4.25)+(100*6.25)+(units-600)*9;
        }
        void print()
        {
        cout<<"\n customer Name"<<name;
        cout<<"\n Address:"<<address;
        cout<<"\n customer id:"<<customerid;
        cout<<"\n Amount:"<<amount<<"\n";
    }
    };
    int main()
    {
    Ebill e;
    e.getdata();
    e.calculate();
    e.print();
    return 0;
 }


