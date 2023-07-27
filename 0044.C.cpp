#include<bits/stdc++.h>
using namespace std;
long long a[105],n,t,l,r;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n>>t;
	while(t--)
	{
		cin>>l>>r;
		for(long long i=l;i<=r;i++)
		{
			a[i]++;
		}
	}
	for(long long i=1;i<=n;i++)
	{
		if(a[i]!=1)
		{
			cout<<i<<" "<<a[i]<<endl;
			return 0;
		}
	}
	cout<<"OK"<<endl;
	return 0;
}
