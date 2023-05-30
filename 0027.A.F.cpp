#include<bits/stdc++.h>
using namespace std;
long long n,t;
long long a[3005];
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>n;
	memset(a,0x00,sizeof(a));
	for(long long i=1;i<=n;i++)
	{
		cin>>t;
		a[t]++;
	}
	for(long long i=1;i<=3001;i++)
	{
		if(a[i]==0)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}
