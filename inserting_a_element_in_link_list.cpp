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
		void add(int n)
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
	void sort()
	{
		Node *Next;
		Node *current=head;
	
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
		    current=current->next;
		}
		
	}	
	  void add_to_shorted_list(int n)
	  {
	  	Node *temp=new Node;
	  	temp->data=n;
	  	temp->next=NULL;
	  	Node *current=head;
	  	Node *Next;
	  	while(current!=NULL)
	  	{
	  		Next=current->next;
	  		if(Next->data > n)
	  		{
	  		     current->next=temp;
				   temp->next=Next;	
			}
	  		current=current->next;
		}
	  	
	  }

	
};
int main()
{
	Link_list l;
	int n,var;
	cout<<"enter the number of nodes you want to insert"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the "<< i+1<<"node"<<endl;
		cin>>var;
		l.add(var);
	}
	cout<<"List before shorting"<<endl;
	l.display();
	l.sort();
	cout<<"List afer shorting"<<endl;
	l.display();
	cout<<"enter how many numbers you want to add"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"testing"<<endl;
		cin>>var;
		l.add(var);
	}
	cout<<"the list after addition"<<endl;
	l.display();
   	l.sort();
   	cout<<"final sorted list"<<endl;
   	l.display();
   	return 0;
	
}
