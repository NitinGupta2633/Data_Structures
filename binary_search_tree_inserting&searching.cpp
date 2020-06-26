#include<iostream>
class Node{
	public:
		int data;
		Node *lchild;
		Node *rchild;
};
class bst
{
	Node *root;
	public:
	bst()
	{	
		root=NULL;
	}
	void insert(int key);
	void search(int search_element);
	Node* get_root()
	{
		Node *p=root;
		return p;
	}
	void inorder(Node *p);
	
};
void bst::insert(int key)
{
	if(root==NULL)
	{
		Node *temp=new Node;
		root=temp;
		temp->data=key;
		temp->lchild=temp->rchild=NULL;
	}
	else
	{
		Node *p=root;
		Node *t;
		while(p!=NULL)
		{
			t=p;
			if(p->data < key)
			{
				p=p->rchild;
			}
			else if(p->data > key)
			{
				p=p->lchild;
			}
		}
		Node *temp=new Node;
		temp->data=key;
		temp->lchild=temp->rchild=NULL;
		if(key > t->data)
		{
			t->rchild=temp;
		}
		else
		{
			t->lchild=temp;
		}
	}
}
void bst::search(int search_element)
{
	Node *temp=root;
	int n=-1;
	while(temp!=NULL)
	{
		if(temp->data==search_element)
		{
					n=1;	
			std::cout<<"element is present in the tree"<<std::endl;
			break;
		}
		if(temp->data > search_element)
		{
			temp=temp->lchild;
		}
		if(temp->data< search_element)
		{
			temp=temp->rchild;
		}
	}
	if(n==-1)
	{
		std::cout<<"soory the element is not in the tree"<<std::endl;
	}
}
void bst::inorder(Node *p)
{
	if(p)
	{
		inorder(p->lchild);
		std::cout<<p->data<<" , ";
		inorder(p->rchild);
	}
}
int main()
{
	bst t;
	t.insert(9);
	t.insert(5);
	t.insert(10);
	t.insert(65);
	t.insert(54);
	t.insert(0);
	t.search(0);
	t.inorder(t.get_root());
}
