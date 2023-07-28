#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long a[200005],s[200005],ans=0x3f3f3f3f,t=0;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n>>k;
	memset(s,0x00,sizeof(s));
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		s[i]=a[i]+s[i-1];
	}
	for(long long i=1;i<=n-k+1;i++)
	{
		if(s[i+k-1]-s[i-1]<ans)
		{
			t=i;
			ans=s[i+k-1]-s[i-1];
		}
	}
	cout<<t<<endl;
	return 0;
}
