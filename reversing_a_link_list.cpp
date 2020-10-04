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
	Node *head,*tail;
	public:
		Link_List()
		{
			head=NULL;
			tail=NULL;
		}
	void append(int n)
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
	void display()
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
   void reverse()
   {
   	Node *current=head;
   	Node *previous=NULL;
   	Node *Next=NULL;
   	while(current!=NULL)
   	{
   		Next=current->next;
   		current->next=previous;
   		previous=current;
   		current=Next;
	   }
	    head=previous;
   }
	
};
int main()
{
	Link_List l;
	l.append(1);
	l.append(2);
	l.append(3);
	l.append(4);
	l.append(5);
	l.display();
	l.reverse();
	cout<<"after reversing"<<endl;
	l.display();
}
