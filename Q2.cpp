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
	stack s,s1;
	int t,flag;
	int n,c;
	cout<<"enter the no of elements you want to enter in the stack\n";
	cin>>n;
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>c;
		s.push(c);
	}
	while(s.top!=-1)//first push elements in temporary stack from the original stack
	{
		s1.push(s.pop());
	}
	//cout<<s1.a[0];
	for(int i=0;i<n;i++)//perform sorting in temporary stack
	{
		flag=0;
		for(int j=0;j<n-1;j++)
		{
			if(s1.a[j]<s1.a[j+1])
			{
				flag=1;
				t=s1.a[j];
				s1.a[j]=s1.a[j+1];
				s1.a[j+1]=t;
				
			}
		}
      if(flag==0)
      {
      	break;
	  }
	  
	}
	cout<<endl;
	for(int i=0;i<n;i++)//after sorting push the elements from temporary stack into original stack
	{
		s.push(s1.pop());
	}
cout<<"after ascending order\n";
	s.display();//display elements
}
