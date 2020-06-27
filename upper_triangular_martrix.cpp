#include<iostream>
void upper_triangular(int arr [],int n)
{
	int x=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i<=j)
			{
				std::cout<<arr[x]<<" ";
				x++;
				}	
				else
				{
					std::cout<<"0 ";
				}
				
		}
		std::cout<<"\n";
	}
}
int main(void)
{
	int n;
	std::cout<<"enter the size of the matrix"<<std::endl;
	std::cin>>n;
	int element=(n*(n+1))/2;
	int arr[element];
	std::cout<<element<<" will be entered"<<std::endl;
	std::cout<<"enter the elements row wise"<<std::endl;
	for(int i=0;i<element;i++)
	{
		std::cout<<"enter element "<<i+1<<std::endl;
		std::cin>>arr[i];
	}
	upper_triangular(arr ,n);
	
}
