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
	void copy(stack &s2);
};
void stack::copy(stack &s2)
{
	s2.top=top;//copy the top value of stack s1 into stack s2
	for(int i=top;i>=0;i--)
	{
		s2.a[i]=a[i];//copy elements
	}
}
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
	stack s1,s2;
	int n,c;
	cout<<"enter the no of elements you want to put into stack\n";
	cin>>n;
	cout<<"enter elements\n";
	for(int i=0;i<n;i++)//push elements in original stack
	{
		cin>>c;
		s1.push(c);
	}
	s1.copy(s2);//copy elements from stack s1 to s2(s2 is passed as an object in the function)
	cout<<"after copy\n";
	s2.display();
}
