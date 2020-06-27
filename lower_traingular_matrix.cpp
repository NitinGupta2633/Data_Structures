#include<iostream>
void lower_triangular_matrix(int arr[],int n)
{
	int x=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		  if(i>=j)
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
	std::cout<<"Enter the size of square matrix"<<std::endl;
	std::cin>>n;
	int element;
	element=(n*(n+1))/2;
	int arr1[element];
	std::cout<<"so there will be "<< element<<"elements in the  matrix\nenter the elements in row wise order"<<std::endl;
	for (int i=0;i<element;i++)
	{
		std::cout<<"enter the element "<<i+1<<std::endl;
		std::cin>>arr1[i];
	}
	 lower_triangular_matrix(arr1,n);
}

