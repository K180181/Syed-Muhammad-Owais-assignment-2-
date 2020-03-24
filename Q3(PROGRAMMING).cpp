#include<iostream>
#include<string.h>
#define size 30
using namespace std;
char exp[size];
int top=-1;
char pop()
{
	if(top<0)
	{
		cout<<"underflow\n";
	}
	else
	{
		return exp[top--];
	}
}
void push(char e)
{
	//char exp[size];
	
	if(top>=size-1)
	{
		cout<<"overflow!!";
	}
	else
	{
		exp[++top]=e;
		//cout<<exp[top]<<endl;
	}
}
void DelimeterMatching(char ex[],int l)
{
	int c=0,s=0;
	
	for(int i=0;i<=l;i++)
	{
		if(ex[i]=='{'||ex[i]=='('||ex[i]=='[')//if open brackets found then push it onto the stack and increment s
		{
			s++;
			
			push(ex[i]);
		}
		else if(ex[i]=='}'||ex[i]==')'||ex[i]==']')//if close bracket found then opo th etop most element from the stack and compare if the  pop bracket resemble to the close bracket or not
		{
			
			char x=pop();
			
			if(ex[i]-x==1||ex[i]-x==2)//check brackets through ascii codes
			{
				c++;
				
			}
		}
		
	}
	if(c==s)//if open brackets found their cloe brackets
	{
		cout<<"success \n";
	}
	else
	{
		cout<<"failure\n";
	}
}

int main()
{
	int l;
	
	char expression[size];
	cout<<"enter a expression\n";
	cin>>expression;
	l=strlen(expression);
	
	DelimeterMatching(expression,l-1);
	
}
