#include<iostream>
class Node
{
	public:
	int data;
	Node *next;
};
class Link_List
{
	Node *tail, *head;
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
		void display_for_linear_list()
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				std::cout<<temp->data<<std::endl;
				temp=temp->next;
			}
		}
		void make_it_loop()
		{
			tail->next=head;

		
		}
		
	void display()
		{
			Node *temp=head;
			do
			{
				std::cout<<temp->data<<std::endl;
				temp=temp->next;
			}
			while(temp!=head);
		}
};
int main()
{
	Link_List l;
	l.insert(0);
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
	l.make_it_loop();
	l.display();
}
