#include<bits/stdc++.h>
using namespace std;
long long t,n;
int main()
{
	cin>>t;
	while(t--)
	{
		long long a,b,ans=0;
		cin>>n;
		for(long long i=1;i<=n;i++)
		{
			cin>>a>>b;
			if(a>b)
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
  
