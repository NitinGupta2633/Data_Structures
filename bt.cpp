#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *lchild;
		Node *rchild;
};
class Queue{
	public:
		Node **array;
		int front,rear;
		Queue()
		{
			rear=0;
			front=0;
			Node *array=new *Node[100];
		}
		void enqueue(Node *x)
		{
			if(rear>=100)
			{
				cout<<"queue is full"<<endl;
			}
			array[rear] = x;
			rear++;
		}
		Node *dequeue()
		{	
		if(front > rear)
			{
				cout<<"queue is empty"<<endl;
			}
			Node *x;
			x=array[front];
			front++;
			return x;
		}
		int is_empty()
		{
		if(rear==front)
		{
			return 1;	
		}	
		else
		{
			return 0;
		}
		
		}
};
class tree
{	Node *root;
	Node *p;
	Queue q;
	public:
		void insert(int level)
		{
			int val;
			cout<<"enter the root value"<<endl;
			cin>>val;
			root->data=val;
			root->lchild=root->rchild=NULL;
			q.enqueue(root);
			int i=0;
			while(!q.is_empty()&&i<level-1)
			{
				p=q.dequeue();
				cout<<"enter the value of lchild of "<<p->data<<endl;
				cin>>val;
				Node *temp=new Node;
				temp->data=val;
				temp->lchild=temp->rchild=NULL;
				p->lchild=temp;
				q.enqueue(temp);
				cout<<"enter the value of rchild of "<<p->data<<endl;
				cin>>val;
				Node *temp1=new Node;
				temp1->data=val;
				temp->lchild=temp1->rchild=NULL;
				p->rchild=temp;
				q.enqueue(temp1);
				i=i+1;
			}
		}
		Node *get_root()
		{
			Node *x=root;
			return x;
		}
		void preorder(Node *x)
		{	
			if(x)
			{
			cout<<x->data<<" ";
			preorder(x->lchild);
			preorder(x->rchild);
			}
		}
		void postorder(Node *x)
		{	
			if(x)
			{	
			preorder(x->lchild);
			preorder(x->rchild);
			cout<<x->data<<" ";
			}
		}
		void inorder(Node *x)
		{	
			if(x)
			{
			preorder(x->lchild);
			cout<<x->data<<" ";
			preorder(x->rchild);
		
			}
		}
		void levelorder(Node *x)
		{
			Queue k;
			Node *f=root;
			Node *l;
			cout<<x->data<<" ";
			k.enqueue(f);
			while(!k.is_empty())
			{
				 l=k.dequeue();
				 cout<<l->lchild<<" ";
				 k.enqueue(l->lchild);
				 cout<<l->rchild<<" ";
				 k.enqueue(l->rchild);
			}
		}
		int height(Node *root)
		{
			int x=0,y=0;
			if(root==0)
			{
				return 0;
			}
			x=height(root->lchild);
			y=height(root->rchild);
			if(x>y)
			{
				return x+1;
			}
			else
			{
				return y+1;
			}
		}
};
int main()
{
		tree t;
		t.insert(3);
		t.levelorder(t.get_root());
}
