#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0;
int a[100005],s[10005];

int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=n;i++)
	{
		int l=i,r=n;
		while(l<=r)
		{
			int mid=(l+r)/2;
			if(s[mid]-s[i-1]<=m)
			l=mid+1;
			else
			r=mid-1;
		}
		ans=max(ans,r-i+1);
	}
	cout<<ans;
	
	return 0;
 } 
