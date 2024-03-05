#include<iostream>
using namespace std;

class Node{
public :
	int data;
	Node* next;
	
};

class List{
public : Node* head;
	
public : List()
{
	Node* head;
	head=nullptr; 
}
	
int insert(int data)
{
	Node* newnode = new Node;
	newnode->data=data;
	newnode->next=head;
	cout<<data<<" ";
	return 0;
}

};

int main()
{	
	//Node n1;
	List l1;
	l1.insert(34);
	l1.insert(30);
	l1.insert(3);
return 0;
}
