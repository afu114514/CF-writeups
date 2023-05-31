#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	for(int k=1;k<=n;k++)
	{
		if(i==j||i==k||j==k)
		continue;
		if(a[i]==a[j]+a[k])
		{
			printf("%d %d %d\n",i,j,k);
			return 0;
		}
	}
	printf("-1\n");
	return 0;	
}
