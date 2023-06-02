#include<bits/stdc++.h>
using namespace std;
long long n,d,ans=0;
long long a[2005];
int main()
{
	cin>>n>>d;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(long long i=2;i<=n;i++)
	{
		if(a[i-1]<a[i])
		continue;
		else if(a[i-1]==a[i])
		{
			ans++;
			a[i]+=d;
		}
		else
		{
			ans+=(a[i-1]-a[i])/d+1;
			a[i]+=d*((a[i-1]-a[i])/d+1);
		}
	}
	cout<<ans<<endl;
	return 0;
}
