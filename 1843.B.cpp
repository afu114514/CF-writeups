#include<bits/stdc++.h>
using namespace std;
long long t,n,a;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long  v=0,ans=0,sum=0;
	
		for(long  long i=1;i<=n;i++)
		{
			cin>>a;
			if(a<0)
			{
				v=1;
			}
			else if(a>0)
			{
				ans+=v;
				v=0;
			}
			sum+=abs(a);
		 } 
		 ans+=v;
		 cout<<sum<<" "<<ans<<endl;
	}
	return 0;
}
