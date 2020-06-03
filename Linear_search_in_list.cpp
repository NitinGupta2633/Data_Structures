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
   	void Insert(int n)
   	{
   		Node *temp=new Node;
   		temp->data=n;
   		temp->next=NULL;
   		if(head==NULL)
   		{
   			head=temp;
   			tail=temp;
   			
		   }
		   tail->next=temp;
		   tail=tail->next;
	   }
	   void Linear_Search(int n)
	   {
	   	int x=0;
	   	Node *temp=head;
	   	while(temp!=NULL)
	   	{
	   		if(n==temp->data)
	   		{
	   			x=1;
			   }
			   temp=temp->next;
		   }
	   	if(x==1)
	   	{
	   		std::cout<<"element is in the list"<<std::endl;
		   }
		   else
		   {
		   	std::cout<<"element does not found"<<std::endl;
		   }
		   
	   }
};
int main()
{
	
	Link_List l;
	l.Insert(4);
	l.Insert(5);
	l.Insert(7);
	l.Insert(8);
	l.Insert(9);
	l.Insert(6);
	l.Linear_Search(4);
	
}

