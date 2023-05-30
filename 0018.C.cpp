#include<bits/stdc++.h>
using namespace std;
int n,ans=0;
int s[100005],a[100005];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<n;i++)
	{
		if(s[i]==s[n]-s[i])
		ans++;
	}
	printf("%d",ans);
	
	return 0;
	
 } 
