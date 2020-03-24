#include<iostream>
#define max 1000
using namespace std;//define stack in terms of queue
//basic operations of stack are handled like (push,pop,top element,check empty)
class queue{
	int rear,front;
	public:
		int a[max];
		queue()
		{
		
			rear=-1;
			front=-1;
		}
		bool isempty()
		{
			if(front==-1&&rear==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		int front_top()
		{
			front=rear;
			return a[front];
		}
		int dequeue()
		{
			
			if(front==-1&&rear==-1)
			{
				cout<<"all the elements are popped\n";
			}
			else
			{
				front=rear;
				rear--;
				return a[front--];
				
				
			}
		}
		void enqueue(int x)
		{
			
			if(front==-1&&rear==-1)
			{
				front++;
			}
			if(rear==max-1)
			{
				cout<<"oveflow\n";
			}
			else
			{
				a[++rear]=x;
				
			}
		}
};
class stack:public queue//using inheritance(oop concept)
{
	public:
	queue q1;
	void push(int x)
	{
	
		q1.enqueue(x);
	}
	int pop()
	{
		return q1.dequeue();
	}
	int top()
	{
		return q1.front_top();
	}
	bool empty()
	{
		return q1.isempty();
	}
	
};
int main()
{
	stack s;
	int n,c;
	cout<<"enter the no of elements you want to push\n";
	cin>>n;
	cout<<"Enter the elements\n";
		for(int i=0;i<n;i++)
		{
			cin>>c;
			s.push(c);//push function
		}
		int j=0;
		
		cout<<"top element = "<<s.top();//top function called
		cout<<endl;
		bool again=s.empty();//empty function called
		if(again==true)
		{
			cout<<" empty\n";
		}
		else
		{
			cout<<"not empty\n";
		}
		cout<<"After popping\n";
		while(j!=n)//while all the elements are not popped
		{
			cout<<s.pop()<<endl;//pop function called
			j++;
		}
		
		
	
}
