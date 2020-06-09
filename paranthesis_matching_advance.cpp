#include<iostream>
using namespace std;
#include<string>
class stack
{
	public:
		int arr[100];
		static int index;
		static int top;
		 void push(char p)
		 {
		 	arr[index]=p;
		 	index++;
			 top++;
		
		 }
		 void pop(char p)
		 {
		 	
		 	if( p==')' && arr[top]=='(')
		 	{
		 		top=top-1;
		 		index--;
		 	
			 }
			 else if(p==']'&&arr [top]=='[')
		 	{
		 		top=top-1;
		 		index--;
			 }
			  else if(p=='}'&& arr[top]=='{')
		 	{
		 		top=top-1;
		 		index--;
			 }
		 }
		 int  isempty()
		 {
		 	if(top==-1)
		 	{
		 		return 1;
			 }
			 else
			 {
				return 0;
			}
		 }
};
int::stack::index;
int::stack::top=-1;
int main()
{
	string s;
	std::cout<<"enter the sentence containing the paranthesis"<<std::endl;
	cin>>s;
	
	stack l;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='(' || s[i]=='{' ||s[i]=='[' )
		{
			
			l.push(s[i]);
		}
		if(s[i]==')'|| s[i]=='}'|| s[i]==']')
		{
			
			l.pop(s[i]);
		}
	}
int r;
r=l.isempty();

if(r==1)
{
	std::cout<<"order of paranthesis is correct"<<std::endl;
}
else 
{
	std::cout<<"order of paranthesis is not correct"<<std::endl;
}
}
