#include<iostream>
using namespace std;
class Node{
public:
	
	int data;
	Node *next;
};
class link_list{
	Node *head,*tail;
	public:
		void display()
		{
			while(head!=NULL)
		   {
		       
				cout<<head->data<<endl;
				head=head->next;
				
			}
		}
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
	
		void count()
		{
			int n=0;
			while(head!=NULL)
			{
				head=head->next;
              n++;
			}
			cout<<"Number of nodes ="<<n<<endl;
		}

		void recursive_display(class link_list *obj)
		{
		while(head!=NULL)
		{
			cout<<head->data<<endl;
			recursive_display(head->next)
			}
				}		
	};


int main()
{
    	link_list l;
    	l.insert(50);
    	l.insert(4);
    	l.insert(43);
    	l.insert(3);
       l.recursive_display(l);
    //	l.display();
         //l.count();
}
