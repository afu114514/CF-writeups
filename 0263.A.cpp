#include<bits/stdc++.h>
using namespace std;
int a[10][10],ans=10;
int main()
{
//	freopen("data.in","r",stdin);
	for(int i=1;i<=5;i++)
	for(int j=1;j<=5;j++)
	{
		cin>>a[i][j];
	}
	for(int i=1;i<=5;i++)
	for(int j=1;j<=5;j++)
	{
		if(a[i][j]==1)
		{
			ans=min(abs(i-3)+abs(j-3),ans);
		}
	}
	printf("%d",ans);

	return 0;

}
