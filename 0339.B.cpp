#include<bits/stdc++.h>
using namespace std;
long long  n,ans,x,m,y;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n>>m;
	x=1;
	for(int i=1;i<=m;i++)
	{
		cin>>y;
		if(y>=x)
		ans+=y-x;
		else
		ans+=n-x+y;
		x=y;
	}
	printf("%lld",ans);
	return 0;
 } 
