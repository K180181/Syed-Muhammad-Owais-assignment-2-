#include<iostream>
using namespace std;
struct node{   //implementation of stack to hold structure and float data type(or any according to your desire)
	float data;
	node *link;
};
struct node *top=0;
void display(int n)
{
	int i=0;
	while(i!=n)
	{
		cout<<top->data;
		top=top->link;
		i++;
	}
}
void push(int x)//implement stack using linklist
{
	node *temp=new node();
	temp->data=x;
	temp->link=top;
	top=temp;
}
bool isempty()
{
	if(top==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void peek()
{
	if(top==0)
	{
		cout<<"no top element\n";
	}
	else
	{
		cout<<top->data;
	}
}
int pop()
{
	node *temp=top;
	if(top==0)
	{
		cout<<"no element";
	}
	else
	{
		top=temp->link;//shift top to the next address
		delete(temp);//delete the initial node
		return top->data;
	}
}
int main()
{
	int n,x;
	cout<<"Enter the number of elements you want to store in stack\n";
	cin>>n;
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>x;
		push(x);
	}
	display(n);
}
