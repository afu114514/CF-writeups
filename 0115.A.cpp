#include<bits/stdc++.h>
using namespace std;
int fa[2005],n,ans=-1;
int dfs(int p,int k)
{
	if(fa[p]==-1)
	return k;
	else
	dfs(fa[p],k+1);
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>fa[i];
	}
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,dfs(i,1));
	}
	cout<<ans<<endl;
	return 0;
}
