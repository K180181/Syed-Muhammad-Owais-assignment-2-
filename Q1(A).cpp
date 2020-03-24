#include<iostream>
#define max 1000
using namespace std;
class stack{        //stack class

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
void stack::display()//display elements of stack
{
                               //0 1 2(top value)
	while(top!=-1)  `//initially 1 2 3  //now after display since it is in reverse order so 1 will be pop out first
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
	stack s,s1,s2;//s1 and s2 are the two temporary stacks
	int n,c;
	cout<<"enter the no of elements you want to put into stack\n";
	cin>>n;
	cout<<"enter elements\n";
	for(int i=0;i<n;i++)//push elements in original stack
	{
		cin>>c;
		s.push(c);
	}
	while(s.top!=-1)//copy elements of original stack into stack s1 in reverse order
	{
		s1.push(s.pop());
	}
	while(s1.top!=-1)//copy elements of temporary stack s1 into s2 in reverse order
	{
		s2.push(s1.pop());
	}
	while(s2.top!=-1)
	{
		s.push(s2.pop());
	}

s.display();//now the stack is in reverse order
}
