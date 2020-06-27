#include<iostream>
int print_diagonal(int arr[],int n);
int main()
{
	int n;
	std::cout<<"enter the size of square matrix "<<std::endl;
	std::cin>>n;
	int arr[n];
	std::cout<<"enter all the digonal element"<<std::endl;
	for(int i=0;i<n;i++)
	{
		std::cout<<"enter the element "<<i+1<<std::endl;
		std::cin>>arr[i];
	}
	print_diagonal(arr,n);
}
int print_diagonal(int arr[],int n)
{
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		
			if(i==j)
			{
			   std::cout<<arr[i]<<" ";
			}
			else
			{
			
			std::cout<<"0"<<" ";
		}
		}
		std::cout<<"\n";
	}
}
