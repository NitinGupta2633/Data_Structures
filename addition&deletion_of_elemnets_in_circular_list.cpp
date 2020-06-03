#include<iostream>
class Node
{
	public:
		int data;
		Node *next;
};
class Link_List
{
	Node *head,*tail;
	int n=0;
	public:
		Link_List()
		{
			head=NULL;
			tail=NULL;
		}
		void insert(int b)
		{
			Node *temp=new Node;
			temp->data=b;
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
			n++;	
		}
		void display()
		{
			Node *temp=head;
			do
			{
				std::cout<<temp->data<<std::endl;
				temp=temp->next;
			}
			while(temp!=NULL);
		}
		void make_loop()
		{
			tail->next=head;
		}
		void delete_a_element_at_head()
		{
			int x;
			Node *temp=head;
			temp=temp->next;
			x=head->data;
			delete head;
			head=temp;
			tail->next=head;
		}
		void delete_a_element_at_a_particular_postion(int position)
		{  
		   //std::cout<<"testing 1"<<std::endl;
		   if(position>n)
		   {
		   	std::cout<<"sorry deletion not possible invalid position "<<std::endl;
		   }
		   else 
		   {
		   	//std::cout<<"testing 2"<<std::endl;
		   	Node *temp;
		   	//std::cout<<"testing 3"<<std::endl;
		   	Node *previous=tail;
		   	//std::cout<<"testing 4"<<std::endl;
		   	temp=head;
		   	//std::cout<<"testing 5"<<std::endl;
		   	int p=0,x;
		   	//std::cout<<"testing 6"<<std::endl;
		   	do
		   	{
		   		//std::cout<<"testing 7"<<std::endl;
		   		p++;
		   		//std::cout<<"testing 8"<<std::endl;
		   		if(p==position)
		   		{
		   		//	std::cout<<"testing 9"<<std::endl;
		   			previous->next=temp->next;
		   		//	std::cout<<"testing 10"<<std::endl;
		   			x=temp->data;
		   		//	std::cout<<"testing 11"<<std::endl;
		   			delete temp;
		   			break;
				}
		   		else 
		   		{
				//   std::cout<<"testing 12"<<std::endl;
		   			temp=temp->next;
		   		//	std::cout<<"testing 13"<<std::endl;
					previous=previous->next;
				//	std::cout<<"testing 14"<<std::endl;	
				}
			}
			while(temp!=head);
		   	
		   }
	}
		   void insert_in_circular_list(int b)
		   {
		   		Node *temp=new Node;
		   		temp->data=b;
		   		tail->next=temp;
		   		temp->next=head;
		   		tail=tail->next;
		   }	
				void display_circular()
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
	l.make_loop();
//	l.delete_a_element_at_head();
//	l.delete_a_element_at_a_particular_postion(2);
   	l.insert_in_circular_list(8);
	l.display_circular();
}
