
  #include<bits/stdc++.h>
using namespace std;
long long t,n,m;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long a,b,c,ans=0;
		a=b=c=0x3f3f3f3f;
		for(long long i=1;i<=n;i++)
		{
			cin>>m>>s;
			if(s=="01")
			a=min(a,m);
			else if(s=="10")
			b=min(b,m);
			else if(s=="11")
			c=min(c,m);
		}
		ans=min(a+b,c);
		if(ans>400005)
		{
			cout<<"-1"<<endl;
		}
		else cout<<ans<<endl;
	}
	return 0;
}
