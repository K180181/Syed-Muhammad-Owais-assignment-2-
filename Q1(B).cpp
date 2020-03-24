#include<iostream>
#define max 1000
using namespace std;
int front,rear,a[max];//for queue
class stack{

	public:
			int top, count,n;
	int front,rear,a[max];//for queue
	int s[max];//for stack
	stack()
	{
		top=-1;
		front=-1;
		rear=-1;
	}
	void push(int x);
	int pop();
	void display();
	void reverse(stack &s);
	void enqueue(int x);
	void dequeue(stack &s);
};
void stack::enqueue(int x)
{
	if(front=-1&&rear==-1)
	{
		front++;
	}
	if(rear==max-1)
	{
		cout<<"overflow\n";
	}
	else
	{
		a[++rear]=x;//store elements of stack in queue in reverse order
	
	}
}
void stack::dequeue(stack &s)//push the element in original stack
{
	if(s.front>s.rear)
	{
		s.rear=s.front=-1;
	}
	else
	{
		
		s.push(s.a[front++]);//now element in stack are in reverse order
	}
}
void stack::reverse(stack &s)
{
	
	while(s.top!=-1)
	{
		s.enqueue(s.pop());//enqueue function to hold the elements of stack in reverse order
	}
	
	while(s.front<=s.rear)
	{
		dequeue(s);
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
		return (s[top--]);
		
	}
}
void stack::display()
{
	int i=0;
	while(i!=top+1)
	{
		cout<<s[i]<<endl;
		i++;
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
		s[++top]=x;
		//cout<<s[top];
	}
}
int main()
{
	stack s;
cout<<"Enter no of elements you want to enter\n";
cin>>s.n;
int c;
cout<<"enter the elements\n";
for(int i=0;i<s.n;i++)
{
	cin>>c;
	s.push(c);//push elements in the stack
}
 s.reverse(s);//reverse the stack using queue object is passed in this function
 cout<<"after reversing\n";
s.display();
}
