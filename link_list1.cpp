#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;	
};
class Link_List
{
	Node *head,*tail;
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
		void display()
		{
		    Node* temp = head;
			while(temp!=NULL)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
	
		}
		void count()
		{
			int n=0;
			Node* temp = head;
			while(temp!=NULL)
			{ 
			temp=temp->next;
			n++;	
			}
	
			cout<<"no of adds in the list are " <<n<<endl;
		}
void sum()
{
	int sum=0;
	Node *temp = head;
	while(temp!=NULL)
	{
		sum=sum+temp->data;
		temp=temp->next;
		
	}
	cout<<" sum of all nodes = "<<sum<<endl;
	
}
void max()
{
	Node *temp=head;
	int a=temp->data;
	while(temp!=NULL)
	{
		if(a<temp->data)
		{
			a=temp->data;
		}
		temp=temp->next;
	}
	cout<<"Max element is "<<a<<endl;
}
void min()
{
	Node *temp=head;
	int a=temp->data;
	while(temp!=NULL)
	{
		if(a>temp->data)
		{
			a=temp->data;;
			
		}
		temp=temp->next;
	}
	cout<<"Min element is "<<a<<endl;
}
void search(int n)
{
	int number=0;
	Node *temp=head;
	while(temp!=NULL)
	{ number++;
		if(temp->data==n)
		{
		  cout<<n<<" is present at "<<number<<" position of list"<<endl;
		  break;
		}
		temp=temp->next;
	}
}
 Node* gethead()
 {
 Node	*temp=head;
 	return temp;
	 }	
	void Recursive_display(Node *temp)
	{
        if(temp == NULL)
        {
            cout << "NULL" << endl;
        }
        else
        {
        	
            cout << temp->data << endl;
            Recursive_display(temp->next);   
        }
    }

};
	
int main()
{ 

Link_List l;
l.insert(45);
l.insert(43);
l.insert(42);
l.insert(3);
l.display();
l.count();
l.sum();
l.max();
l.min();
l.Recursive_display(l.gethead());
l.search(42);
return 0;
}
