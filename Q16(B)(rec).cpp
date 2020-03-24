#include<iostream>
#include<string.h>
#include<cctype>
#define max 20
using namespace std;
bool pailandrome(char s[],int i,int l,int k)//i is initialize zero l and k is the length of string respectively
{
	
	static int c=0;
	for(int j=0;j<=l;j++)
	{
		s[j]=tolower(s[j]);//convert capital letters in a sentence into a small letters
	
	}
    
    
	if(c==(l/2)+1)//base case
	{
	
		return true;
	}
	
	else if(s[i]==' '||s[i]==','||s[i]=='.'||s[i]=='’')//if special characters found skip this index
	{
		
		c++;
		
		pailandrome(s,i+1,l,k);//recursive calling
	}
	else if(s[k]==' '||s[k]==','||s[k]=='.'||s[k]=='’')//if special characters found skip this index
	{
		c++;
		//cout<<i;
			pailandrome(s,i,l,k-1);//recrsive calling
		
	}
	else if(s[i]==s[k])
	{
		c++;
		
		pailandrome(s,i+1,l,k-1);//recursive calling
	}
	else if(s[i]!=s[k])
	{
		
		return false;
	}
	
	
}
int main()
{
	
	char s[max];
	cout<<"enter pailandrome\n";
	cin.getline(s,17);
	int l=strlen(s);
	//cout<<l;
	bool b=pailandrome(s,0,l-1,l-1);
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
