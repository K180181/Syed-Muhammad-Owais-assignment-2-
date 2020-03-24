#include<iostream>
using namespace std;
int sequence(int n,int i)// n is the limit where you want the series while i is initially 1 as series starts with (1/1)
{

if(n==i)//base case
{
	
	return (1/i);
}
else if(i%2==0)//if i is even execute this
{
	
	 return (1/i)- sequence(n,i+1);//recursive calling
}
else
{
	
	return (1/i)+ sequence(n,i+1);//recursive calling
}
}
int main()
{
	int n;
	cout<<"enter n\n";
	cin>>n;
	
	cout<<sequence(n,1);
	
}
