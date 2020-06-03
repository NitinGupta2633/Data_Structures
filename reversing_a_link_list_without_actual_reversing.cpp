#include<iostream>
using namespace std;
class Node
{
	public:
   int data;
   Node *next;	
};
class Link_list
{
  Node *head,*tail;
public:
   Link_list()
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
Node *gethead()
{
	Node *temp=head;
	
	return temp;
}
void Recursive_display(Node *temp)
{
	if(temp==NULL)
	{
	exit;
	}
	else
	{
		Recursive_display(temp->next);
		cout<<temp->data<<endl;
	}
}
};
int main()
{
	Link_list l;
	l.insert(4);
	l.insert(5);
	l.insert(1);
	l.insert(9);
	l.Recursive_display(l.gethead());
	return 0;
}
