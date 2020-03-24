#include<iostream>
#define max 1000
using namespace std;
class stack{

	public:
			int top;
	char a[max];
	stack()
	{
		top=-1;
	}
	void push(char x);
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
		char x=a[top--];
		return x;
	}
}
void stack::push(char x)
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
void pailandrome(string s)
{
	stack s1,s2;//use multiple stacks
	int l=s.size();
	int c=0;
	for(int i=0;i<l;i++)
	{
		s1.push(s[i]);//push character by character string in stack s1
	}
	while(s1.top!=-1)
	{
		s2.push(s1.pop());//now push characters in stack s2 from s1
	}
	for(int i=l-1;i>=0;i--)
	{
		if(s[i]==s2.pop())//if elements in stack 2 is same as input string then increment c
		{
			c++;
		}
		else
		{
			break;
		}
	}
	if(c==l)//if no of match elements is equal to length of string then it is pailandrome
	{
		cout<<"pailandrome\n";
	}
	else
	{
		cout<<"not pailandrome";
	}
}
int main()
{

	string s1;
	cout<<"enter the string\n";
	cin>>s1;
	pailandrome(s1);
}
	
