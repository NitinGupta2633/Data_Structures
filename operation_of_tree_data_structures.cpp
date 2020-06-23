#include<iostream>
using namespace std;
class Node
{
	public:
		Node *lchild;
		Node *rchild;
		int data;
};
class queue
{
	public:
		int front;
		int rear;
		int size;
		Node **q;
		
		queue()
		{
			rear=front=-1;
			size=10;
			q=new Node*[size];
		}
		queue(int x)
		{
			rear=front=-1;
			this->size=x;
			q=new Node*[size];
		}
		void enqueue(Node *x)
		{
			if(rear==size-1)
			{
				std::cout<<"queue is full"<<std::endl;
			}
			else
			{
				rear++;
				q[rear]=x;
			}
		}
		Node *dequeue()
		{
			Node *x=NULL;
			if(rear==front)
			{
				std::cout<<"queue is empty"<<std::endl;
			}
			else
			{
				x=q[front+1];
				front++;
			}
			return x;
		}
		int isempty()
		{
			return front==rear;
		}
};
class tree
{
	Node *root;
	public:
		tree()
		{
			root=NULL;
		}
		
		Tree(){root=NULL;}
    void createTree();
    void preorder(){preorder(root);}
    void preorder(Node *p);
    void postorder(){postorder(root);}
    void postorder(Node *p);
    void inorder(){inorder(root);}
    void inorder(Node *p);
    void levelorder(){levelorder(root);}
    void levelorder(Node *p);
    int Height(){return Height(root);}
    int Height(Node *root);
};		void tree:: createTree()
		{
			Node *p,*t=NULL;
			int x;
			queue q(100);
			std::cout<<"enter the value of root"<<std::endl;
			std::cin>>x;
			root=new Node;
			root->data=x;
			root->lchild=root->rchild=NULL;
			q.enqueue(root);
			while(!q.isempty())
			{
				p=q.dequeue();
				std::cout<<"enter the left child of "<<p->data<<std::endl;
				std::cin>>x;
				if(x!=-1)
				{
					t=new Node;
					t->data=x;
					t->lchild=t->rchild=NULL;
					p->lchild=t;
					q.enqueue(t);
				}
				std::cout<<"enter the right child of "<<p->data<<std::endl;
				std::cin>>x;
				if(x!=-1)
				{
					t=new Node;
					t->data=x;
					t->lchild=t->rchild=NULL;
					p=t->rchild;
					q.enqueue(t);
				} 
			}
		}
		
		void tree::preorder(Node *p)
		{
		
			if(p)
			{
				std::cout<<p->data<<" ";
				preorder(p->lchild);
				preorder(p->rchild);
			}
		}
			
		void tree:: inorder(Node *p)
		{
			
			if(p)
			{
				inorder(p->lchild);
				std::cout<<p->data<<" ";
				inorder(p->rchild);
				
			}
		}
	  
	  void tree::postorder(Node *p)
	  {
	  	
	  	if(p)
	  	{  
	  	postorder(p->lchild);
	  	postorder(p->rchild);
	  	std::cout<<p->data<<" ";
	 	}
	  }
	  void tree::levelorder(Node *p)
	  {
	  	queue x(100);
	  	std::cout<<root->data<<" ";
	  	Node *temp;
	  	temp=root;
	  	x.enqueue(temp);
	  	while(!x.isempty())
	  	{
	  		temp=x.dequeue();
			  	if(temp->lchild)
			  	{
			  		std::cout<<temp->data<<" ";
			  		x.enqueue(temp->lchild);
				  }
				  if(temp->rchild)
				  {
				  	std::cout<<temp->data<<" ";
				  	x.enqueue(temp->rchild);
				  }
		}
	  }
	  int tree::Height(Node *root)
	  {
	  Node *temp=root;
	  	int x,y;
	  	if(temp==0)
	  	{
	  		return 0;
		  }
		  x=Height(root->lchild);
		  y=Height(root->rchild);
		  if(x>y)
		  {
		  	return x+1;
		  }
		  else
		  {
		  	return y+1;
		  }
	  }
	  

int main()
{
	tree t;
	t.createTree();
	std::cout<"inorder";
	t.inorder();
	std::cout<<"levelorder";
	t.levelorder();
	std::cout<<"postoder ";
	t.postorder();
	std::cout<<"preorder ";
	t.preorder();
	int x;
	x=t.Height();
	std::cout<<"height = "<<x<<std::endl;
}
