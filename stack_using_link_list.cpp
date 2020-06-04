#include<iostream>
class Node 
{
	public:
		int data;
		Node *previous;
};
class stack
{
	public:
		Node *tail,*head;
		stack()
		{
			tail=NULL;
			head=NULL;
		}
	void push(int n)
	{
		Node *temp=new Node;
		temp->data=n;
		temp->previous=NULL;
		if(head==NULL)
		{
			head=tail=temp;
		}
		else
		{
			temp->previous=head;
			head=temp;
		}
	}
	void pop()
	{
		Node *temp=head;
		int x;
		temp=head->previous;
		x=head->data;
		delete head;
		head=temp;
	}
	void display()
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			std::cout<<temp->data<<std::endl;
			temp=temp->previous;
		}
	}
};
int main()
{
	stack s;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	s.push(0);
	s.pop();
	s.pop();
	s.display();
}
