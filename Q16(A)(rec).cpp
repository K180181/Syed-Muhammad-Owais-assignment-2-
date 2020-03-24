#include<iostream>
#include<string.h>
using namespace std;
bool pailandrome(string s,int i,int l)//where i is initially zero l is the length of a string
{
	int c=0;
	if(c==(l/2)+1)//base case for e.g: mom(l=3) c==(3/2)+1 condition when met it means the word is a pailandrome
	{
		return true;
	}
	else if(s[i]==' '||s[l]==' ')
	{
		i++;
		
	}
	else if(s[i]!=s[l])
	{
		return false;
	}
	if(s[i]==s[l])
	{
		c++;
		pailandrome(s,i+1,l-1);
	}
	
}
int main()
{
	
	string s;
	cout<<"enter a word\n";
	cin>>s;
	int l=s.size();
	bool b=pailandrome(s,0,l-1);
	cout<<endl;
	if(b==0)
	{
		cout<<"not a pailandrome";
	}
	else
	{
		cout<<"it is a pailandrome";
	}
}
