#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long n,ans=0;
long long a[50],b[50];
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=1;j<=n;j++)
		{
			if(i==j)
			continue;
			else
			{
				if(a[i]==b[j])
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
