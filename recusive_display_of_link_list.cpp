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
		Node* gethead()
 {
    Node *temp=head;
 	return temp;
	 }	
	void Recursive_display(Node *temp)
	{
       if (temp == NULL)
        {
            exit;
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
l.Recursive_display(l.gethead());
}
