#include<bits/stdc++.h>
using namespace std;
int t,a[5];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a[0]>>a[1]>>a[2];
		sort(a,a+3);
		if(a[1]!=a[2])cout<<"NO"<<endl;
		else cout<<"YES\n"<<a[2]<<" "<<a[0]<<" "<<1<<endl;
	}
}
