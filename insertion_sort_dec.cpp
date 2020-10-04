#include<iostream>
using namespace std;
int main()
{
	int array[]={0,1,5,6,9,8,7,4,2,3};
	int key ,n=10,k,i;
	for(int j=1;j<n;j++)
	{
		key=array[j];
		i=j-1;
		while(i>=0 && key>array[i])
		{
			
			array[i+1]=array[i];
			i=i-1;
		}
		array[i+1]=key;
	}
	for(int l=0;l<n;l++)
	{
		cout<<array[l];
		
	}
}
