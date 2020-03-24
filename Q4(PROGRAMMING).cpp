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
		cout<<a[top--];
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
void adding_numbers(string n1,string n2)//pass two strings
{
	stack s1,s2,s3;
	int c1,c2;
	int carry,sum=0;
	int l1=n1.size();
	int l2=n2.size();
	for(int i=0;i<l1;i++)
	{
		s1.push(n1[i]);
	}
	for(int i=0;i<l2;i++)
	{
		s2.push(n2[i]);
	}
	carry=0;//initially carry zero
	while(1)
	{
		sum=((s1.pop()-'0')+(s2.pop()-'0')+carry);//pop element from two stacks and add carry along with it
		
		s3.push(sum%10+'0');//push the mod part in stack s3
		carry=sum/10;
		
		if(s1.top==-1)//this if else condition check which stack has less element
		{
			c1++;
			break;
		}
		else if(s2.top==-1)
		{
			c2++;
			break;
		}
	}
    
	if(c1==1)//if stack s1 has less elements then add the remaining elements of s2
	{
		//s1.top++;
		for(int i=s2.top;s2.top!=-1;i--)
		{
			sum=((s2.pop()-'0')+carry);
			
			s3.push(sum%10+'0');
			carry=sum/10;
		}
	}
		 else if(c2==1)//if stack s2 has less elements then add the remaining elements of s1
	{
		//s2.top++;
		for(int i=s1.top;s1.top!=-1;i++)
		{
			sum=((s1.pop()-'0')+carry);
			//cout<<sum;
			s3.push(sum%10+'0');
			carry=sum/10;
		}
}
s3.display();//display the result in s3
}
int main()
{
	string n1,n2;
	cout<<"enter the first number\n";
	cin>>n1;
	cout<<"enter the second number\n";
	cin>>n2;
	adding_numbers(n1,n2);
}
