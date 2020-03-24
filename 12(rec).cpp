#include<iostream>
using namespace std;
int cube(int n,int i)//n is a number whose cube need to find while i is initially zero
{

	if(i==3)//base case
	{
		return 1;
	}
	else
	{
		
		return n*cube(n,i+1);//recursive calling
	}
}
int main()
{
	int n;
	cout<<"enter a number\n";
	cin>>n;
	cout<<"cube of a number = ";
	cout<<cube(n,0);
}
