#include<bits/stdc++.h>
using namespace std;
long long t,n,m,a,b;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long minx=0,maxx=0,miny=0,maxy=0;
		for(long long i=1;i<=n;i++)
		{
			cin>>a>>b;
			minx=min(a,minx);
			miny=min(b,miny);
			maxx=max(a,maxx);
			maxy=max(b,maxy);
		}
		
		cout<<2*((maxx-minx)+(maxy-miny))<<endl;
	}
	return 0;
}
