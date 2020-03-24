#include<iostream>
#include<string.h>
using namespace std;

bool check_character(char s[],char a,int i,int l)
{
	if(i>l)//base case
	{
		return false;
	}
	if(s[i]==a)//base case
	{
		return true;
	}
	else
	{
		check_character(s,a,i+1,l);//recursive calling
	}
}
int count_character(char s[],char a,int i,int l)
{
	static int c;
	if(i>l)
	{
		return c;
	}
	else if(s[i]==a)
	{
		
	 c++;
	 return count_character(s,a,i+1,l);
	}
	else
	{
		 return count_character(s,a,i+1,l);
	}
	
	
}
void remove_occurrence(char *s,char a,int i,int l)

{
	
	if(i>l)//base case
	{
		s[i]='\0';
		return ;
	}
	if(s[i]!=a)
	{
	
		cout<<s[i];
		
		
	 remove_occurrence(s,a,i+1,l);//recursive calling
		
	}
	else
	{
		 remove_occurrence(s,a,i+1,l);//recursive calling
	}
}
int main()
{
	char s[10];
	cout<<"enter a string\n";
	cin>>s;
	int l=strlen(s);
	char a;
	cout<<"enter a character\n";
	cin>>a;
    bool check= check_character(s,a,0,l);
    if(check==0)
    {
    	cout<<"character not found\n";
	}
	else
	{
		cout<<"character found\n";
	}
	cout<<"no of its occurrence is\n";
	
	cout<<count_character(s,a,0,l-1);
	cout<<endl;
	cout<<"after removal of occurrence\n";
	remove_occurrence(s,a,0,l);
	
	
	
}
