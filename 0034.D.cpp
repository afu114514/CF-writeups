#include<bits/stdc++.h>
using namespace std;
int n,a,b,c,chu[100005];
vector<int >cun[100005];
inline int read()
{
	int v=1,s=0;
	char c=0;
	while(!isdigit(c)){
		if(c=='-')
		v=-1;
		c=getchar();
	}
	while(isdigit(c))
	{
		s=s*10+c-'0';
		c=getchar();
	}
	return v*s;
}
inline dfs(int x,int fa)
{
	chu[x]=fa;
	for(int i=0;i<cun[x].size();++i)
	if(cun[x][i]!=fa)
	dfs(cun[x][i],x);
}
int main()
{
	n=read();
	a=read();
	b=read();
	for(int i=1;i<=n;i++)
	{
		if(i==a)
		continue;
		int c=read();
		cun[c].push_back(i);
		cun[i].push_back(c);
	}
	dfs(b,0);
	for(int i=1;i<=n;i++)
	{
		if(i==b)
		continue;
		printf("%d ",chu[i]);
	}

	
	return 0;
	
 } 
