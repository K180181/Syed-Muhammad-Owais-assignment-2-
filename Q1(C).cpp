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
	while(top!=-1)
	{
		cout<<a[top--]<<endl;
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
	stack s,s1;//temporary stack s1 is created
	int n,c,a;
	cout<<"enter the size of stack\n";
	cin>>n;
	cout<<"enter elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>c;
		s.push(c);
	}
	cout<<endl;
	for(int i=0;i<n-1;i++)//outer loop is executes one less than the number of elements
	{
		a=s.pop();//pop the top most elements
		for(int i=0;i<n-i-1;i++)
		{
			s1.push(s.pop());//push the remaining elements in temporary stack
		}
		s.push(a);//again first push the top most element in original stack than the elements from s1
		for(int i=0;i<n-i-1;i++)
		{
			s.push(s1.pop());
		}
	}
	cout<<"after reversing\n";
	s.display();
}
