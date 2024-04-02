#include<iostream>
#include<string>
using namespace std;
class Movie{
	public:
	float adult_ticket_price, child_ticket_price,total_price;
	int num_adult,num_child;
	string movie_name;
	int getInfo(){
		cout<<"Enter the Movie name :"<<endl;
		cin>>this->movie_name;
		cout<<"Enter adult Ticket price : "<<endl;
		cin>>this->adult_ticket_price;
		cout<<"Enter child Ticket price : "<<endl;
		cin>>this->child_ticket_price;
		cout<<"Enter total number of adult Tickets: "<<endl;
		cin>>this->num_adult;
		cout<<"Enter total number of child Tickets: "<<endl;
		cin>>this->num_child;
	}
	int getShowInfo()
	{
		total_price=(adult_ticket_price*num_adult)+(child_ticket_price*num_child);
		cout<<"Total Amount: "<<total_price;   		
	}
	
};
int main()
{
	Movie m;
	m.getInfo();
	m.getShowInfo();
	return 0;
}
