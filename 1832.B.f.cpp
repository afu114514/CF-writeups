#include<bits/stdc++.h>
using namespace std;
long long n,k,t,ans=0;
long long a[200005];
int main()
{
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n>>k;
		for(long long i=1;i<=n;i++)
		cin>>a[i];
		sort(a+1,a+1+n);
		for(long long i=2;i<=n;i++)
		a[i]+=a[i-1];
		for(long long i=0;i<=k;i++)
		ans=max(ans,a[n-k+i]-a[i*2]);
		cout<<ans<<endl;
	}
	return 0;
}

