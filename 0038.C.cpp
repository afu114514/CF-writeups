#include<bits/stdc++.h>
using namespace std;
int n,l,mx=-1;
int a[105];
int main()
{
	scanf("%d%d",&n,&l);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=l;i<=100;i++)
	{
		int ans=0;
		for(int j=1;j<=n;j++)
		{
			ans+=a[j]/i;
		}
		mx=max(mx,ans*i);
	}
	printf("%d",mx);
	return 0;
}
