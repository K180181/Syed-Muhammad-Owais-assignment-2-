#include<iostream>
#define max 1000
using namespace std;
class stack{

	public:
			int top;
	int a[max];
	stack()
	{
		top=-1;
	}
	void push(int x);
	int pop();
	void display();
};
void stack::display()
{
	int i=0;
	while(i!=top+1)
	{
		cout<<a[i++]<<endl;
	}
}
int stack::pop()
{
	if(top<0)
	{
		cout<<"stack underflow!!"<<endl;
	}
	else
	{
		int x=a[top--];
		return x;
	}
}
void stack::push(int x)
{
	if(top>=(max-1))
	{
		cout<<"stack overflow\n";
	}
	else
	{
		a[++top]=x;
	}
}
int main()
{
	stack s1,s2,s3;
	int n,c;
	cout<<"enter the no of elements you want to put into stack(S1)\n";
	cin>>n;
	cout<<"enter elements\n";
	for(int i=0;i<n;i++)//push elements in original stack s1
	{
		cin>>c;
		s1.push(c);
	}
	cout<<endl;
	while(s1.top!=-1)
	{
		s3.push(s1.pop());//now push the elements in temporary stack s3 from s1
	}
	while(s3.top!=-1)
	{
		s2.push(s3.pop());//now push the elements in another original stack s2 from temporary stack s3
	}
	cout<<"elements in stack s2\n";
	s2.display();//elements are in the same order as in s1
}
