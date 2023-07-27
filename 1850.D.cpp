#include<bits/stdc++.h>
using namespace std;
long long t,n,k;
long long a[200005];
int main()
{
	//freopen("data.in","r",stdin);
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long ans=1,tmp=1;
		for(long long i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		for(long long i=2;i<=n;i++)
		{
			if(a[i]-a[i-1]<=k)
			tmp++;
			else
			tmp=1;
			ans=max(ans,tmp);
		}
		cout<<n-ans<<endl;
	}
	return 0;
}
