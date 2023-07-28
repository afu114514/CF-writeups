#include<bits/stdc++.h>
using namespace std;
int n,m;
int ans=0;
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<=min(n,m);i++)
	{
		for(int j=0;j<=min(n,m);j++)
		{
			if(i*i+j==n&&j*j+i==m)
			ans++;
		}
	}
	printf("%d",ans);

	return 0;
} 
