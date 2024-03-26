#include<iostream>
using namespace std;

class stack
{
public:
	int arr[100];
	int top=-1;
	int n=100;
	void push()
	{
		if(top>=n-1)
		{
			cout<<"Stack is full";
		}
		else{
			top++;
			cout<<"Enter elements in stack : ";
			cin>>arr[top];
		}
	}
	
	void pop()
	{
		if(top<=-1)
		cout<<"stack underflow"<<endl;
		else{
			cout<<endl<<" deleted element is "<<" "<<arr[top]<<endl;
		top--;
		}
	}
	
	void disply()
	                                                                                           {
		if(top>=0){
			for(int i=top; i>=0; i--)
			cout<<arr[i]<<" ";
	    }
	    else{
	    cout<<"stack is empty";
		 }
	}
};

int main()
{
	stack s1;
	for(int i=0;i<5;i++)
	s1.push();
	cout<<"Before deleting stack element : ";
	s1.disply();
	s1.pop();
	cout<<"After deleting stack element : ";
	s1.disply();
	return 0;
}
