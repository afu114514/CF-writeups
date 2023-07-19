#include<bits/stdc++.h>
using namespace std;
long long n,t;
long long a[200005],s[200005];

int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n;
		memset(a,0x00,sizeof(a));
		memset(s,0x00,sizeof(s));
		for(long long i=1;i<=n;i++)
		cin>>a[i];
		long long i=n,v=0;
		for( i=n;i>=1;i--)
		{
			if(s[a[i]]==0)
			s[a[i]]=1;
			else
			{
				cout<<i<<endl;
				v=1;
				break;
			}
		}
		if(v==0)
		cout<<0<<endl;
	}
	return 0;
}
