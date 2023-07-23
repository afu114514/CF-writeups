#include<bits/stdc++.h>
using namespace std;
long long n,m,k,t,f;
long long a[1005],ans,s=0;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n>>m>>k;
	for(long long i=1;i<=m;i++)
	{
		a[i]=0x3f3f3f3f;
	}
	for(long long i=1;i<=n;i++)
	{
		cin>>t>>f;
		a[t]=min(a[t],f);
	}
	for(long long i=1;i<=m;i++)
	{
		s+=a[i];
	}
	cout<<min(s,k)<<endl;
	return 0;
}
