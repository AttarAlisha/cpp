#include <iostream>
#include<string>
using namespace std;

class Person
{
    public:
    string name="Alisha";
   
    int display1()
    {
    cout<<name<<" From Person class"<<endl;
    return 0;
    }
};

class Emp:virtual public Person
{
    public:
    int display2()
    {
    cout<<name<<" From  Emp class"<<endl;
    return 0;
    }
};
class Customer:virtual public Person
{
    public:
    int display3()
    {
    cout<<name<<" From Customer class"<<endl;
    return 0;
    }
};
class Emp_Cust: public Emp,public Customer
{
    public:
     int display5()
    {
    cout<<name<<" From EMP_Cust class"<<endl;
    return 0;
    }
};

int main() {
 
Emp e;
e.display1();
e.display2();

Customer c;
c.display1();
c.display3();
cout<<"---------------"<<endl;
 Emp_Cust ec;
 ec.display5();
    return 0;
}
