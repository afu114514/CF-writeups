#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[1005],l,r;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]!=i)
		{
			r=i;
			if(l==0)
			l=i;
		}
	}
	for(long long i=l,j=r;i<=r;i++,j--)
	{
		if(a[i]!=j)
		{
			cout<<"0 0"<<endl;
			return 0;
		}
	}
	cout<<l<<" "<<r<<endl;
	return 0;
}
