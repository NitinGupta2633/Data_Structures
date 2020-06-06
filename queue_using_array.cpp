#include<iostream>
class queue
{
	int array[100];
	static int index;
	int last,size;
	public:
		void create()
		{
			std::cout<<"enter the size of queue"<<std::endl;
			std::cin>>size;
		}
		void enqueue(int x)
		{
			if(index<size)
			{
				array[index]=x;
				last=index;
				index++;
				
			}
			else
			{
				std::cout<<"stack is full"<<std::endl;
			}
		}
		void display()
		{
			for(int i=0;i<=last;i++)
			{
				std::cout<<array[i]<<std::endl;
			}
		}
		void dequeue()
		{
			for(int i=0;i<=last;i++)
			{
				array[i]=array[i+1];
			}
			
			last--;
			index--;
		}
		void is_empty()
		{
			if(index==0)
			{
				std::cout<<"queue is empty"<<std::endl;
			}
			else
			{
				std::cout<<"queue is not empty"<<std::endl;
			}
		}
		void is_full()
		{
			if(last+1==size)
			{
				std::cout<<"queue is full"<<std::endl;
			}
			else 
			{
				std::cout<<"queue has some space for the elemnets"<<std::endl;
			}
		}
		void first()
		{
			std::cout<<"the first element in the queue is  "<<array[0]<<std::endl;
		}
		void last_element()
		{
			std::cout<<"last element in the queue is "<<array[last]<<std::endl;
		}
	
};
int queue::index=0;
int main()
{
	queue obj;
	obj.create();
//	obj.enqueue(0);
	//obj.enqueue(1);
	//obj.enqueue(2);
	//obj.enqueue(3);
	//obj.enqueue(4);
	//obj.enqueue(5);
	//obj.dequeue();
	//obj.dequeue();
	obj.first();
	obj.last_element();
	obj.is_empty();
	obj.is_full();
	obj.display();
	
}
