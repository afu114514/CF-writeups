#include<bits/stdc++.h>
using namespace std;
long long t,n,m,a,b,c,d,ans;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>a>>b>>c>>d;
		c=abs(c-a),d=abs(d-b);
		a=0,b=0;
		long long x,y;
		x=n-c,y=m-d;
		ans=x*y*2;
		if(x>=c+1&&y>=d+1)
		ans-=(x-c)*(y-d);
		cout<<n*m-ans<<endl;	
	}

	
	return 0;
}
