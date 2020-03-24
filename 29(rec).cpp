#include<iostream>
using namespace std;
void print(int n)//print from 10 to 0
{
	if(n<0)// base case
	{
		return;
	}
	else
	{
		cout<<n<<endl;
		print(n-1);//recursive calling
	}
}
int main()
{
	int n=10;
	print(n);
}
