#include<iostream>
using namespace std;
#define N 4
bool issafe(int board[][N],int i,int j,int n)
{
	for(int row=0;row<i;row++)
	{
		if(board[row][j]==1)
		{
			return false;
		}
	}
	//for left diagnol
	int x=i;
	int y=j;
	while(x>=0&&y>=0)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x--;
		y--;
	}
	// for right diagnol
	x=i;
    y=j;
	while(x>=0&&y<n)
	{
		if(board[x][y]==1)
		{
			return false;
		}
		x--;
		y++;
	}
	return true;
}
bool nqueen(int board[][N],int i,int n)
{
	//base case
	if(i==n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(board[i][j]==1)
				{
					cout<<"Q";
				}
				else
				{
					cout<<"0";
				}
			}
			cout<<endl;
		}
		return true;
	}
	for(int j=0;j<n;j++)
	{
		if(issafe(board,i,j,n))
		{
		
			board[i][j]=1;
			bool nextqueen=nqueen(board,i+1,n);
			if(nextqueen)
			{
				return true;
			}
			board[i][j]=0;
	}
		
	}
	//tried all position
	return false;
}
int main()
{

	int board[N][N]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	nqueen(board,0,4);
}
