#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long t,n;

int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long k,ans=0,a;
		for(long long i=1;i<=n;i++)
		{
			cin>>k;
			a=abs(k-i);
			ans=__gcd(ans,a);
		}
		cout<<ans<<endl;
	}
	return 0;
}
