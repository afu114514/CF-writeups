#include<bits/stdc++.h>
using namespace std;
long long t,n,H,M,a,b;

int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n>>H>>M;
		long long ans=1445;
		for(long long i=1;i<=n;i++)
		{
			cin>>a>>b;
			long long m=a*60+b,k=H*60+M;
			if(m<k)
			ans=min(ans,1440-k+m);
			else
			ans=min(m-k,ans);
		}
		cout<<ans/60<<" "<<ans%60<<endl;
	}
	return 0;
}
