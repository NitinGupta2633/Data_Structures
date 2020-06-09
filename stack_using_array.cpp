#include<iostream>
class stack
{
	public:
	static int index;
  static int size;
	int top=-1;
	int arr[100];
	public:
		void create()
		{	
			std::cout<<"enter size of stack"<<std::endl;
			std::cin>>size;
		     arr[size];
		}
		void push(int n)
		{	
		    if(index<size)
		    {
				arr[index]=n;
				top++;
				index++;
			}
			else 
			{
				std::cout<<"stack overflowed"<<std::endl;
			}
		}
		void pop()
		{
			top--;
		}
		void display()
		{
			if(top==0)
			{
				std::cout<<"no element in the stack "<<std::endl;
			}
			else
			{
				for(int i=top;i>=0;i--)
				{
					std::cout<<arr[i]<<std::endl;
				}
			}
		}
		void peek(int Index)
		{
			int upper_index;
			upper_index=top-Index+1;
			if(upper_index>=0)
			{
				std::cout<<arr[upper_index]<<std::endl;
			}
			else
			{
				std::cout<<"soory index not possible"<<std::endl;
			}
		}
		void isempty()
		{
			if(top==-1)
			{
				std::cout<<"stack is empty"<<std::endl;
			}
			else 
			{
				std::cout<<"elements are present in the stack it's not empty"<<std::endl;
			}
		}
		void stack_top()
		{
			std::cout<<"element present at stack top is   "<<arr[top]<<std::endl;
		}
		void isfull()
		{
			if( top+1==size)
			{
				std::cout<<"stack is full"<<std::endl;
			}
			else
			{
				std::cout<<"stack is not full"<<std::endl;
			}
		}
};
int stack::index;
int stack::size;
int main()
{
	stack s;
	s.create();
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	s.push(0);
	//s.pop();
	//s.pop();
	s.display();
	//s.peek(3);
	//s.isfull();
	s.isempty();
	s.stack_top();
}
