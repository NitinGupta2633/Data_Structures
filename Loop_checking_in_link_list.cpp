#include<iostream>
class Node
{
	public:
		int data;
		Node *next;
};
class link_list
{
	Node *tail,*head;
	public:
		link_list()
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
			Node *temp=head;
			while(temp!=NULL)
			{
				std::cout<<temp->data<<std::endl;
				temp=temp->next;
			}
		}
		void make_linear_to_loop()
		{
		//	std::cout<<"testing 1"<<std::endl;
			Node *temp=head;
		//	std::cout<<"testing 2"<<std::endl;
			int n=0;
		//	std::cout<<"testing 3"<<std::endl;
			Node *join;
			
		//	std::cout<<"testing 4"<<std::endl;
			while(temp!=NULL)
			{
		//	    	std::cout<<"testing 5"<<std::endl;	
				if(n==3)
				{
		//				std::cout<<"testing 6"<<std::endl;
					//join=temp;
		//				std::cout<<"testing 7"<<std::endl;
					tail->next=temp;
					break;
				}
		//			std::cout<<"testing 8"<<std::endl;
				n++;
		//	std::cout<<n<<std::endl;
				temp=temp->next;
			}			   
		}
	
      void check_loop()
      {
      		std::cout<<"testing 1"<<std::endl;
      	Node *p,*q;
      		std::cout<<"testing 2"<<std::endl;
	  	p=head;
		  q=head;
	  		std::cout<<"testing 4"<<std::endl;
      	do
      	{
      			std::cout<<"testing 5"<<std::endl;
      		p=p->next;
      			std::cout<<"testing 6"<<std::endl;
      		q=q->next;
      			std::cout<<"testing 7"<<std::endl;
      		if(q!=NULL)
      		{
      			q=q->next;
      				std::cout<<"testing 3"<<std::endl;
			  }
			else 
			{
			std::cout<<"testing 8"<<std::endl;
			q=NULL;
			}
			

		}
		while(p!=NULL && q!=NULL && p!=q);
			std::cout<<"testing 9"<<std::endl;
		if(p==q)
		{
				std::cout<<"testing 10"<<std::endl;
			std::cout<<"List contains loop"<<std::endl;
			//break;
		}
		else 
		{
				std::cout<<"testing 11"<<std::endl;
			std::cout<<"List doesnot have loop"<<std::endl;
		}
	  }
};
int main()
{
	link_list l;
	l.insert(5);
	l.insert(4);
	l.insert(3);
	l.insert(2);
	l.insert(1);
	l.insert(0);
  
 //  l.make_linear_to_loop();
 //  	l.display();
    l.check_loop();	
}
