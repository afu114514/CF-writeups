#include<bits/stdc++.h>
using namespace std;
long long t,n;
long long a[200005];
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(long long i=1;i<=n;i++)
		cin>>a[i];
		bool f1=1,f2=1;
		for(long long i=2;i<=n;i++)
		{
			if(a[i-1]>a[i])
			f1=0;
			if(a[i-1]<a[i]&&!f1)
			f2=0;
		}
		cout<<(f2?"YES\n":"NO\n");
	}	
	return 0;
}
