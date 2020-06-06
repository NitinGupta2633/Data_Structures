#include<iostream>
class Node
{
	public:
		int data;
		Node *next;
};
class queue
{
	Node *tail,*head;
	public:
		queue()
		{
			tail=NULL;
			head=NULL;
		}
		void enqueue(int x)
		{
			Node *temp=new Node;
			temp->data=x;
			temp->next=NULL;
			if(head==NULL)
			{
				head=tail=temp;
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
				std::cout<<temp->data<<std::endl;
				temp=temp->next;
			}
		}
		void dequeue()
		{
			Node *temp=head;
			temp=head->next;
			int i;
			i=head->data;
			delete head;
			head=temp;
		}
		void last()
		{
			std::cout<<" last element in the queue is "<<tail->data<<std::endl;
		}
		void first()
		{
			std::cout<<" first element in the queue  is "<<head->data<<std::endl;
		}
		void size()
		{
			int Size=0;
			Node *temp=head;
			while(temp!=NULL)
			{
				Size++;
				temp=temp->next;
			}
			std::cout<<"Number of element in the queue="<<Size<<std::endl;
		}
};
int main()
{
	queue obj;
	obj.enqueue(0);
	obj.enqueue(1);
	obj.enqueue(2);
	obj.enqueue(3);
	obj.enqueue(4);
	obj.enqueue(5);
	obj.dequeue();
	obj.dequeue();
	obj.first();
	obj.last();
	obj.display();
	obj.size();
}
