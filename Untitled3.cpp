#include<iostream>
class Node
{
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
   	tail=NULL:
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
	   	Node *temp=head;
	   	while(temp!=NULL)
	   	{
	   		if(n==temp->data)
	   		{
	   			
			   }
		   }
	   	
	   }
};
