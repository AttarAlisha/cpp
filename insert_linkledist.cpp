#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    
    void attach(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Traverse
    void traverse() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Detach at end
    void detach() {
        if (head == nullptr) {
            cout << "List is empty." <<endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* prev = nullptr;
        Node* curr = head;
        while (curr->next != nullptr) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = nullptr;
        delete curr;
    }
};

int main() {
    LinkedList list;
    list.attach(1);
    list.attach(2);
    list.attach(3);

    cout << "Original List: ";
    list.traverse();

    list.detach();

    std::cout << "List after detaching last element: ";
    list.traverse();

    return 0;
}

/*
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
} */
