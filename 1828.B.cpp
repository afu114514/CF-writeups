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
1828.C->1827.A
1828.D1->1827.B1
1828.D2->1827.B2
1828.E->1827.C
1828.F->1827.D	
