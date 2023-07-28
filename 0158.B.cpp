#include<bits/stdc++.h>

using namespace std;
int n,ans;
int a,b,c,t;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		if(t==1)
		a++;
		if(t==2)
		b++;
		if(t==3)
		c++;
		if(t==4)
		ans++;
	}
	ans+=c;
	a=max(a-c,0);
	ans+=b/2;
	b%=2;
	if(b)
	{
		ans++;
		a=max(0,a-2);
	}
	if(a)
	{
		if(a%4)
		ans+=a/4+1;
		else
		ans+=a/4;
	}
	cout<<ans<<endl;
	return 0;
}
