#include<iostream>
using namespace std;
void tail(int i)//i is initially zero in this case
{
	if(i>4)//base case
	{
		return;
	}
	else
	{
		cout<<i<<endl;
		tail(i+2);//recursive calling
	}
}
void non_tail(int i)//i is initially zero
{
	if(i>4)//base case
	{
		return;
	}
	else
	{
		non_tail(i+2);//recursive calling
		cout<<i<<endl;
	}
}
int main()
{
	int i=0;
	cout<<"tail recursion : ";
	tail(i);
	cout<<endl;
	cout<<"non-tail recursion : ";
	non_tail(i);
}
