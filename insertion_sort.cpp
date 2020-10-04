#include<iostream>
using namespace std;
int main()
{
	int arr[]={5,2,4,6,1,3};
	int i=0;
	int key;
	int l=0;
	for(int j=1;j<6;j++)
	{
		key=arr[j];
		i=j-1;
		while(i>=0&&arr[i]>key)
		{
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}

 
 for(l=0;l<6;l++)
{
	cout<<arr[l];
}
}
