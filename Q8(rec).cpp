#include<iostream>
using namespace std;
int mul(int n1,int n2)
{
	if(n1==0)//base case
	{
		return 0;
	}
	else
	{
		return n2+mul(n1-1,n2);//recursive calling
	}
}
int main()
{
	int n1,n2;
	cout<<"enter a first number\n";
	cin>>n1;
	cout<<"enter a second number\n";
	cin>>n2;
	cout<<"after multiplication\n";
	cout<<mul(n1,n2);
}
