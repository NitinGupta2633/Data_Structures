#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
};
class Link_List
{
	Node *tail,*head;
public:
	Link_List()
	{
		head=NULL;
		tail=NULL;
	}
	void insert(int n)
	{
		Node *temp=new Node;
		temp->data=n;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=tail->next;
		}
	}
	void LinearSearch(int n)
	{
		Node *current=head;
		Node *follower;
		while(current!=NULL)
	{
		if(current->data==n)
		{
			follower->next=current->next;
			current->next=head;
			head=current;
			
		}
	follower=current;
	current=current->next;
	}
	}
   void display()
   {
   	Node *temp=head;
   	while(temp!=NULL)
   	{
   	    cout<<temp->data<<endl;
		temp=temp->next;
    }
   	}
};
int main()
{
	Link_List l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
	l.LinearSearch(3);
	l.display();
	return 0;
}
