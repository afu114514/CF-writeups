#include<bits/stdc++.h>
using namespace std;
int n;
int a[105][105];
int ans=0;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			if(i==1&&j==1||i==(n+1)/2&&j==1||i==n&&j==1||i==1&&j==(n+1)/2||i==n&&j==(n+1)/2||i==1&&j==n||i==(n+1)/2&&j==n||i==n&&j==n||(i>1&&i<n)&&(j>1&&j<n))
			{
				ans+=a[i][j];
			}
		}
	}
	printf("%d",ans);
	return 0;
} 
