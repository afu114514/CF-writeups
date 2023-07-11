#include<bits/stdc++.h>
using namespace std;
long long t,n,a[105];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long ans=0;
		for(long long i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		for(long long i=1;i<=n/2;i++)
		{
			ans+=a[n+1-i]-a[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
