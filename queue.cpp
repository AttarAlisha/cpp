#include<iostream>
using namespace std;

class queue
{
public: 
int arr[100];
int n=100;
int front = -1 ,rear = -1;

void enqueue(int num)
{
	if(rear == n-1)
	cout<<"overflow";
	else{
	if(front == -1)
	front=0;
	rear++;
	arr[rear]=num;
	}
}

void dequeue()
{
	if(front == -1 )
	cout<<"underflow";
	else{
	cout<<arr[front]<< " " <<" element is removed "<<endl;
	front++;
	}
}

void display()
{
	if(front == -1)
	cout<<"empty";
	else {
	cout<<"elements : "<<endl;
	for(int i=front; i<=rear; i++)
	cout<<arr[i]<<" "<<endl ;
	}

}

};

int main()
{
	queue q;
	q.enqueue(5);
	q.enqueue(2);
	q.enqueue(1);
	q.enqueue(4);
	q.enqueue(50);
	q.display();
	q.dequeue();
	q.display();
return 0;
}

