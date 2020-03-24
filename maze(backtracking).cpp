#include<iostream>
#define  N 4
using namespace std;
void print(int sol[N][N])
{
	int i,j;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<sol[i][j];
		}
		cout<<endl;
		
	}
}
void mazerat(int maze[N][N],int x,int y,int sol[N][N])
{
	if(x==N-1&&y==N-1)
	{
		sol[x][y]=1;
		print(sol);
		return;
	}
	if(x<0||x>=N||y<0||y>=N||sol[x][y]==1||maze[x][y]==0)
	{
		return;
	}
	sol[x][y]=1;
	mazerat(maze,x+1,y,sol);
	mazerat(maze,x,y+1,sol);
	sol[x][y]=0;
}
void mazesol(int maze[N][N])
{
	int sol[N][N]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	mazerat(maze,0,0,sol);
}
int main()
{
	int maze[N][N]={1,0,0,0,1,1,0,1,0,1,0,0,1,1,1,1};
	mazesol(maze);
}
