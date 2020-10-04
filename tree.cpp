#include<iostream>
class Node
{
	public:
		int data;
		Node *lchild;
		Node *rchild;
};
class tree
{
	Node *root;
	public:
		void insert(int n)
		{
			if(root==NULL)
			{
			Node *temp=new Node;
			root=temp;
			temp->data=n;
			temp->lchild=NULL;
			temp->rchild=NULL;
			}
			else
			{
				Node *p=root;
				Node *t;
			 while(p!=NULL)
			 {
			 	t=p;
			 	if(p->data<n)
			 	{
			 		p=p->rchild;
				}
				 else if(p->data >n)
				 {
				 	p=p->lchild;
				 }
			 }
			 Node *temp=new Node;
			 temp->data=n;
			 temp->lchild=temp->rchild=NULL;
			 if(n>t->data)
			 {
			 	t->rchild=temp;
			 }
			 else {t->rchild=temp;}
			}
		}
		Node* get_root()
		{
			Node *p=root;
			return p;
		}
		void preorder(Node *p)
		{
			if(p)
			{
			cout<<p->data<<" ";
			preorder(p->lchild);
			preorder(p->rchild);
			}
		}
		void inorder(Node *p)
		{
			if(p)
			{
			inorder(p->lchild);
			cout<<p->data<<" ";
			inorder(p->rchild);
			}
	}
		void postorder(Node *p)
		{
			
			}	
};
int main()
{
	
}
