#include<iostream>
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
	Insert_at_head(int n)
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
			temp->next=head;
			head=temp;		
		}	
	}
	Display()
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			std::cout<<temp->data<<std::endl;
			temp=temp->next;
		}
			}		
};
int main()
{
	Link_List l;
	l.Insert_at_head(5);
	l.Insert_at_head(4);
	l.Insert_at_head(3);
	l.Insert_at_head(2);
	l.Insert_at_head(1);
	l.Insert_at_head(0);
	l.Display();
	
   	
}
