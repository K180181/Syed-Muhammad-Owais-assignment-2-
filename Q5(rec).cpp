#include<iostream>
using namespace std;
void odd(int i,int n)
{
	if(i>n)//base case
	{
		return;
	}
	else
	{
		cout<<i<<endl;
		odd(i+2,n);//recursive calling
	}
}
void odd1(int n,int i)
{
	if(n<i)//base case
	{
		return;
	}
	else
	{
		cout<<n<<endl;
		odd1(n-2,i);//recursive calling
	}
}
int main()
{
	int n,i=1;
	cout<<"enter the number\n";
	cin>>n;
	odd(i,n);//part a
	cout<<"enter the number\n";
	cin>>n;
	odd1(n,i);//part b
	
}
