#include<iostream>
using namespace std;

class Box{
	private:
		int length;
	public: Box(){
		length=0;
	}
	friend int total_length(Box);
};

int total_length(Box b){
b.length = 5;
return b.length;

}
int main()
{
	Box b;
	cout<<"lenght : "<<total_length(b);
	return 0;
}
