#include<bits/stdc++.h>
using namespace std;
int n,m,t;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n>>m;
	t=n%m;
	for(int i=1;i<=m-t;i++)
	{
		printf("%d ",n/m);
	}
	for(int i=1;i<=t;i++)
	{
		printf("%d ",n/m+1);
	}

	return 0;

}
