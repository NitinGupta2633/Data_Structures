#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node *next;
};
class Link_List{
	public:
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
		{ cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
};

  void concatenate(Link_List *A,Link_List *B)
  {
  	  A->tail->next=B->head;
  }
int main()
{
	Link_List A,B;
 A.insert(2);
 A.insert(3);
 A.insert(4);
 B.insert(5);
 B.insert(6);
 B.insert(7);
 cout<<"first list"<<endl;
 A.display();
 cout<<"second list"<<endl;
 B.display();
 cout<<"After concatenating both list"<<endl;
 concatenate(&A,&B);
 A.display();
}
