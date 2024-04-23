#include<iostream>
using namespace std;
class complex{
	
	public:
	int real,imag;
	public:	complex(){
	real=0;
	imag=0;
		}
	public: complex(int r,int i)
	{
		real=r;
		imag=i;
	}
	
	int getreal()
	{
		return real;
	}
	int getimag()
	{
		return imag;
	}	
	complex operator +(complex c1)
	{
		complex c3;
		c3.real=real+c1.real;
		c3.imag=imag+c1.imag;
		return c3;
	}
	
	complex operator -(complex c1)
	{
		complex c4;
		c4.real=real-c1.real;
		c4.imag=imag-c1.imag;
		return c4;
	}
	
	complex operator *(complex c1)
	{
		complex c5;
		c5.real=real*c1.real;
		c5.imag=imag*c1.imag;
		return c5;
	}
	/*complex operator /(complex c1)
	{
		complex c6;
		c6.real=real/c1.real;
		c6.imag=imag/c6.imag;
		return c6;
	}*/
};
	
int main()
{
	int a,b,i1,i2;

     cout<<"enter 1st complex no:  ";
     cin>>a>>i1;
     cout<<"enter 2nd complex no: ";
     cin>>b>>i2;
     
	complex c1(a,i1),c2(b,i2);
	complex c3;
	complex c4;
	complex c5;
	complex c6;
	c3=c1+c2;
	c4=c1-c2;
	c5=c1*c2;
	//c6=c1/c2;
	cout<<"Addition of two complex number is : "<<c3.getreal()<<"+"<<c3.getimag()<<"i"<<endl;
	cout<<"Subtraction of two complex number is : "<<c4.getreal()<<"-"<<c4.getimag()<<"i"<<endl;
	cout<<"Multipliaction of two complex number is : "<<c5.getreal()<<"*"<<c5.getimag()<<"i"<<endl;
	//cout<<"Division of two complex number is :"<<c6.getreal()<<"/"<<c6.getimag()<<"i"<<endl;
	return 0;
}
