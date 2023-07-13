
  #include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long a[200005],b[200005];

int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long t	;
	cin>>t;
	while(t--)
	{
		long long n,ans=1,pos=0;
		cin>>n;
		for(register int i=1;i<=n;i++) cin>>a[i];
		for(register int i=1;i<=n;i++) cin>>b[i];
		sort(a+1,a+1+n);
		sort(b+1,b+1+n);
		for(register int i=1;i<=n;i++)
		{
				while(pos<=n-1&&a[i]>b[pos+1])pos++;
				ans=ans*max(0ll,(pos-i+1))%mod;
		}	
		cout<<ans<<endl;
	}
	return 0;
}
