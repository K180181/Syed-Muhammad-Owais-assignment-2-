#include<iostream>
using namespace std;
struct node{
	int data;
	node* link;
};
node* head;

int length_linklist(node *temp)
{
	static int c;
	if(temp==NULL)//base case
	{
		return c;
	}
	else
	{
		c++;//count the number of elements in a link list
		length_linklist(temp->link);//recursive calling
	}

}
void insert_at_end(int n)
{
	node* temp=new node();
	node* prev;
	prev=head;
	temp->data=n;
	temp->link=NULL;
		if(head==NULL)
	{
		head=temp;
		return;
	}
	else
	{
	while(prev->link!=NULL)
	{
		prev=prev->link;
	}
	prev->link=temp;
	temp->link=NULL;
	return;
}
	

}
int main()
{
	head=NULL;
	int n,size;
	
	cout<<"Enter the size of the link list\n";
	cin>>size;
	
	for(int i=0;i<size;i++)
	{
		cout<<"enter the value\n";
	cin>>n;
	insert_at_end(n);
}
cout<<"length of a link list : \n";
cout<<length_linklist(head);

}
