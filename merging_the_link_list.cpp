#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
};
class Link_List()
{
	Node *tail,*head; int number=0;
	public:
	Link_List()
	{
		head=NULL;
		tail=NULL;
	 } 
	 void insert (int n)
	 {
	 	
	 	Node *temp=new Node;
	 	temp->data
	 	temp->next;
	 	if(head==NULL)
	 	{
	 		head=temp;
	 		tail=temp;
		}
	    else 
		{
			tail->next=temp;
			tail=tail->next;;
		}
		number++;	
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
	 
	void shorting_a_list()
	{
		Node *current=head;
		Node *Next;
		current=head;
		Next=current->next;
		while(current!=NULL)
		{	
		    Next=current->next;
			while(Next!=NULL)
			{
				if(Next->data < current->data)
				{
					int temp;
					temp=Next->data;
					Next->data=current->data;
					current->data=temp;
				}
				Next=Next->next;
			}
		}
		
	} 
};
void merge()
int main()
{
	
}
