#include<iostream>
using namespace std;
class Box{
	public :
	int x,y,z;
Box()
{
	x=5;
	y=2;
	z=2;
}
int getarea()
{
	 cout<<x*y*z<<endl;
}
Box(int a, int b ,int c)
{
	x=a;
	y=b;
	z=c;
	cout<<a+b+c<<endl;
}
Box(int p,int q)
{
	x=y=p;
	z=q;
	cout<<x*y*z<<endl;;
}

};
 
int main()
{
	Box b1;
	b1.getarea();
	Box b2(2,2,2);
	Box b3(5,2);
	return 0;    
}
