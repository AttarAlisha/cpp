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
	c3=c1+c2;
	cout<<"Addition of two complex number is : "<<c3.getreal()<<"+"<<c3.getimag()<<"i";
	
	return 0;
}
