#include<iostream>
using namespace std;

class array{
	private:
		int arr[50];
		int size;
		int length;
		public:
			void intialize()
			{
				int x,size;
				cout<<"enter the size of array(not beyod 50)"<<endl;
				cin>>size;
				this->size=size;
				for(int i=0;i<size;i++)
			{
					cin>>x;
				int arr(x,i);
				
			}
			this->length=sizeof(arr);
			
			}
				int arr(int x,int j)
				{
				this->arr[j]=x
				}
		void display()
		{
			for(int i=0;i<length,i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		
}; 
int main()
{
	array f;
	f.intialize();
	f.display();
}
