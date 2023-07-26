#include<bits/stdc++.h>
using namespace std;
long long n,t;
long long a[105],x=0,y=0,s=0;

int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	while(n--)
	{
		cin>>t;
		if(t&1)
		{
			x++;
			a[x]=t;
		}
		else
		{
			y++;
		}
		s+=t;
	}
	sort(a+1,a+1+x);
	if(x==0)
	{
		cout<<0<<endl;
		return 0;
	}
	else
	{
		if(x&1)
		{
			cout<<s<<endl;
		}
		else
		{
			cout<<s-a[1]<<endl;
		}
	}
	return 0;
}
