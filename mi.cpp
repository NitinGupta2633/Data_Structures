#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
};
class Link_list
{
public:

Node *head,*tail;
	Link_list()
	{
		head=tail=NULL;
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
void display()
{
cout<<"the entered list is"<<endl;
Node *temp=head;
while(temp!=NULL)
{
cout<<temp->data<<endl;
temp=temp->next;
}
}
void middle()
{
Node *slow=head,*fast=head,*temp;
int x=0;
   while(fast!=NULL)
	{
	slow=slow->next;
	fast=fast->next;
	fast=fast->next;
	x=slow->data;
	
	}	
}

};
int main()
{
	Link_list l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
	l.insert(6);
	l.insert(7);
	l.display();
	cout<<"middle element is "<<4<<endl;
	l.middle();
}


