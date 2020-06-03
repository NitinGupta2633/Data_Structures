#include<iostream>
class Node
{
	public:
		int data;
		Node *next;
		Node *previous;
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
	   void insert(int n)
	   {
	   		Node *temp=new Node;
	   		temp->data=n;
	   		temp->next=NULL;
	   		temp->previous=NULL;
	   		if(head==NULL)
	   		{
	   			head=temp;
	   			tail=temp;
			   }
			   else 
			   {
			   	temp->previous=tail;
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
	   void reverse_diplay()
	   {
	   		Node *temp=tail;
	   		while(temp!=NULL)
	   		{
	   			std::cout<<temp->data<<std::endl;
	   			temp=temp->previous;
			   }
	   }
	   void sum_of_elements()
	   {
	   	Node *temp=head;
	   	int sum=0;
	   	while(temp!=NULL)
	   	{
	   		sum=sum+temp->data;
	   		temp=temp->next;
		   }
		   std::cout<<"sum of all elemnets in the list "<<sum<<std::endl;
	   }
	   void largest_and_smallest_elememt()
	   {
	   	int max,min;
	   	Node *temp=head;
	   	max=min=head->data;
	   	while(temp!=NULL)
	   	{
	   		if(max<temp->data)
	   		{
	   			max=temp->data;
			   }
			  if(min>temp->data)
			  {
			  	min=temp->data;
			  }
			  temp=temp->next;
		   }
		   std::cout<<"Max element in the list "<<max<<std::endl;
		   std::cout<<"Min element in the list "<<min<<std::endl;
	   }
	   void shorting_a_list()
	   {
	   	int x;
	   	  Node *p,*g;
	   	  p=g=head;
	   	  while(p!=NULL)
	   	  {
	   	  	g=head;
				 while(g!=NULL)
				 {
						if(p->data < g->data)
						{
							x=p->data;
							p->data=g->data;
							g->data=x;			
						}	 	
					g=g->next;			
				  } 	
		   p=p->next;
		  }
	   }
	   Node* gethead()
	   {
	   	Node *temp=head;
	   	return temp;
	   }
	   void recursive_display(Node *temp)
	   {
	   	if(temp==NULL)
	   	{
	   		exit ;
		}
		else
		{
			std::cout<<temp->data<<std::endl;
			recursive_display(temp->next);
		}
	   }
};
int main()
{
	Link_List l;
	l.insert(6);
	l.insert(1);
	l.insert(2);
	l.insert(5);
	l.insert(4);
	l.insert(3);
//	l.display();
//  l.reverse_diplay();
// 	l.sum_of_elements();
//	l.largest_and_smallest_elememt();
//	l.shorting_a_list();
// 	l.display();
   l.recursive_display(l.gethead());
}
