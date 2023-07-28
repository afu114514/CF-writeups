#include<bits/stdc++.h>
using namespace std;
int n,m;
int d[105],f[105][105],a,b,ans;
queue<int>q;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		d[a]++;d[b]++;f[a][b]=f[b][a]=1;
	}
	while(true)
	{
		while(!q.empty())
		q.pop();
		for(int i=1;i<=n;i++)
		{
			if(d[i]==1)
			{
				d[i]--;
				q.push(i);
			}
		}
		if(q.empty())
		break;
		else
		ans++;
		while(!q.empty())
		{
			for(int i=1;i<=n;i++)
			{
				if(f[q.front()][i])
				d[i]--;
			}
			q.pop();
		}
	}
	printf("%d",ans);
	return 0;
}
