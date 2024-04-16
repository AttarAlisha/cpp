#include<iostream>
using namespace std;

class Person{
	public:
		int age=19;
		string name="Alisha";
		long int mob_no=78493145;
		string add="lat";
		void display()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"AGE : "<<age<<endl;
			cout<<"Mobile NUMBER : "<<mob_no<<endl;;
			cout<<"Address :"<<add<<endl;
		}
};

class Customer: public Person
{
	public:
		string product="pen";
		void show1()
		{
			cout<<"Product name :"<<product<<endl;
		}
		
};

class Employee : public Person
{
	public:
		int id=1;
		int salary=29000;
		void show()
		{
			cout<<"Employee ID : "<<id<<endl;
			cout<<"Employee Salary: "<<salary<<endl;
		}
};

class EmpolyeeCustomer : public Customer , public Employee
{
	public:
		void show2()
		{
		cout<<"Employee and Customer"<<endl;
	}
};

int main()
{
	Customer c;
	cout<<"Customer details:"<<endl;
	c.display();
	c.show1();
	Employee emp;
	cout<<"Employee details"<<endl;
	emp.show();
	emp.display();

	EmpolyeeCustomer ec;
	//cout<<"Employee and customer"<<endl;
	ec.show2();
	ec.show();
	ec.show1();
	return 0;
}





