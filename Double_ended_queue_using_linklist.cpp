#include<iostream>
class Node
{
	public:
		int data;
		Node *next;
};
class Double_ended_queue
{
	public:
		Node *tail,*head;
		Double_ended_queue()
		{
			tail=NULL;
			head=NULL;
		}
		void add_front(int n)
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
		void add_back(int n)
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
		void delete_front()
		{
			Node *temp=head;
			temp=temp->next;
			int x;
			x=head->data;
			delete head;
			head=temp;
			
		}
		void delete_back()
		{
			Node *temp=head;
			temp=temp->next;
			Node *current=head;
			while(temp!=NULL)
			{   current=current->next;
				temp=temp->next;
			}
			int x;
			x=tail->data;
			delete tail;
			tail=current;
			tail->next=NULL;
		}
		void display()
		{
			Node *temp=head;
			while(temp->next!=NULL)
			{
			std::cout<<temp->data<<::std::endl;
			temp=temp->next;
			}
		}
};
int main()
{
	Double_ended_queue  l;
	l.add_front(3);
	l.add_front(4);
//	l.add_front(9);
//	l.delete_front();
l.add_back(5);
l.add_back(9);
l.add_front(0);
l.delete_back();
	l.display();
		
}
