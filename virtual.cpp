#include<iostream>
using namespace std;

class base{
	public:
		 void show()
		{
			cout<<"BASE CLASS...."<<endl;
		}
		virtual void show1()
		{
			cout<<"base class 1"<<endl;
		}
		virtual void show2()
		{
			cout<<"base class 2"<<endl;
		}
};

class derived : public base
{
	public:
		 void show()
		{
			cout<<"DERIVED CLASS...."<<endl;
		}
		void show1()
		{
			cout<<"DERIVED CLASS 1"<<endl;
		}
		void show2()
		{
			cout<<"DERIVED CLASS 2"<<endl;
		}
};
int main()
{
	base* b;
	derived d;
	b=&d;
	b->show();
	b->	show1();
	b->show2();
return 0;	
}
