#include<iostream>
#include<string>
using namespace std;

class person{
public:
       int age=19;
       string name="Alisha";
       string add="Abdul lat";
       long int mob_no =132453546;

     void display()
   {
      cout<<age<<endl;
      cout<<name<<endl;
      cout<<add<<endl;
      cout<<mob_no<<endl;
      
    }
};

class Employee : public person
{
public:
       int id=1;
       int salary=29000;
      void show()
      {
      
       cout<<id<<endl;
       cout<<salary<<endl;
       
     }
};

class Student : public person
{
public:
       int roll_no=301;
       string std="SY CSE(AI)";
       float marks=87.80;

     void show1()
    {
     
      cout<<roll_no<<endl;
      cout<<std<<endl;
      cout<<marks<<endl;
      
   }
};


int main()
{
     person p;
     //p.display();
     Employee emp;
     cout<<"Employee INFO :"<<endl;
     emp.display();
     emp.show();
     Student st;
     cout<<"Student INFO :"<<endl;
     st.display();
     st.show1();

return 0;
}
