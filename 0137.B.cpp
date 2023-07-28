#include<bits/stdc++.h>
using namespace std;
long long n,t,ans=0;
long long a[5005];
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	memset(a,0x00,sizeof(a));	
	for(long long i=1;i<=n;i++)
	{
		cin>>t;
		a[t]++;
	}
	for(long long i=1;i<=n;i++)
	{
		if(a[i]==0)
		ans++;
	}
	cout<<ans<<endl;	
	return 0;
}
