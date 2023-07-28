#include<bits/stdc++.h>
using namespace std;
int n,m,k,p=0;
int dx[]={0,0,0,1,-1},dy[]={0,1,-1,0,0};
int vis[505][505];
char s[505][505];
void dfs(int x,int y)
{
	for(int i=0;i<5;i++)
	{
		int x1=x+dx[i];
		int y1=y+dy[i];
		if(x1>0&&x1<=n&&y1>0&&y1<=m&&vis[x][y]==0&&s[x1][y1]=='X'&&p)
		{
			--p;
			s[x1][y1]='.';
			dfs(x1,y1);
		}
	}
	vis[x][y]=1;
}
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n>>m>>k;
	for(int  i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		cin>>s[i][j];
		if(s[i][j]=='.')
		{
		s[i][j]='X';
		p++;
		}
	}
	p-=k;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=m;j++)
	{
		if(s[i][j]=='X')
		dfs(i,j);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<s[i][j];
		}
		cout<<endl;
	}
	return 0;
}	
