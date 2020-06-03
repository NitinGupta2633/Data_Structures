#include<iostream>
class Node 
{
	public:
   int data;
   Node *next;
};
int number=0;
class Link_List
{
	Node *tail,*head;
	public:
		Link_List()
		{
		//	std::cout<<"in const"<<std::endl;
			head=NULL;
			tail=NULL;
		}
	void insert(int n)
	{
		//std::cout<<"test 1"<<std::endl;
		Node *temp=new Node;
		//std::cout<<"test 2"<<std::endl;
		temp->data=n;
		//std::cout<<"test 3"<<std::endl;
		temp->next=NULL;
		//std::cout<<"test 4"<<std::endl;
		if(head==NULL)
		{
		  //  std::cout<<"test 5"<<std::endl;
			head=temp;
			//std::cout<<"test 6"<<std::endl;
			tail=temp;
		}
		else 
		{
			//std::cout<<"test 7"<<std::endl;
			tail->next=temp;
			//std::cout<<"test 8"<<std::endl;
			tail=tail->next;
		}
		number++;
	}
	void display()
	{
		//std::cout<<"test 9"<<std::endl;
		Node *temp=head;
		//std::cout<<"test 10"<<std::endl;
		while(temp!=NULL)
		{
		//	std::cout<<"test 11"<<std::endl;
			std::cout<<temp->data<<std::endl;
		//	std::cout<<"test 12"<<std::endl;
			temp=temp->next;
		}
	}
	void delete_first_node()
	{
		Node *temp=head;
		temp=temp->next;
		delete head;
		head=temp;
		
	}
	void delete_a_particular_node(int position)
	{
		if(position>number)
		{
			std::cout<<"Not possible"<<std::endl;
		}
		else 
		{
			Node *temp=head;
			Node *previous,*Next;
			Next=temp->next;
			previous=head;
			for(int i=1;i<=number;i++)
			{
				if(i==number)
				{
					previous->next=Next;
					delete temp;
				}
				else 
				{
					previous=temp;
					Next=Next->next;
					temp=temp->next;
				}
			}
			
		}
	}
};
int main()
{
	Link_List l;
	l.insert(4);
	l.insert(3);
	l.insert(2);
	l.insert(1);
	l.display();
//	l.delete_first_node();
	//std::cout<<"after deleting first"<<std::endl;
//	l.display();
    std::cout<<"enter the node which you want to delete"<<std::endl;
	int p;
	std::cin>>p;
	l.delete_a_particular_node(p);
    std::cout<<"after deleting the particula node"<<std::endl;
	l.display();
}
