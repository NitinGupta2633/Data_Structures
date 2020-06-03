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
	void sort()
	{
     	Node *Next;
     	cout<<"testing 1"<<endl;
		Node *current=head;
		cout<<"testing 2"<<endl;
	    Next=current->next;
	    cout<<"testing 3"<<endl;
	   while(current!=NULL)
	   {Next=current->next;
	   	cout<<"testing 4"<<endl;
	   	while(Next!=NULL)
	   	{
	   		cout<<"testing 5"<<endl;
	   		if(Next->data < current->data)
	   		{
	   			cout<<"testing-6"<<endl;
	   			int temp;
	   			temp=Next->data;
	   			Next->data=current->data;
	   			current->data=temp;
	   		
			   }
			   	Next=Next->next;
		   }
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
	Link_list l;
	int n,m;
    cout<<"Enter the number  of nodes you want to enter"<<endl;
	cin>>n;	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter value at node "<<i+1<<endl;
		cin>>m;
		l.append(m);
	}
	l.sort();
	l.display();
}
