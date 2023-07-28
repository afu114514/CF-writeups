#include<bits/stdc++.h>

using namespace std;
long long t,n,ans=0,mi,mx;



int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>n;
	cin>>t;
	mi=mx=t;
	for(long long i=1;i<n;i++)
	{
		cin>>t;
		if(t>mx)
		{
			mx=t;
			ans++;
		}
		if(t<mi)
		{
			mi=t;
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
