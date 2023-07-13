
#include<bits/stdc++.h>

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
		long long k,ans=0,t=0;
		for(long long i=1;i<=n;i++)
		{
			cin>>k;
			if(k==0)
			{
				t++;
			}	
			if(k==1)
			{
				ans=max(ans,t);
				t=0;
			}
		}
		ans=max(ans,t);
		cout<<ans<<endl;
	}
	return 0;
}
