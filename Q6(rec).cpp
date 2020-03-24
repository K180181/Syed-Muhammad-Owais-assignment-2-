#include<iostream>
using namespace std;
string comma(int num)
{
	string s=to_string(num);//convert integer into string 
	if(s.size()<4)//base case
	{
		return s;
	}
	else
	{
		string t=','+s.substr(s.size()-3,s.size());//pick last three sub strings and concatenate it with comma
		return comma(num/1000)+t;//recursive calling
	}
}
int main()
{
	int num;
	cout<<"enter a number\n";
	cin>>num;
	
	cout<<comma(num);
	
		
	
}
