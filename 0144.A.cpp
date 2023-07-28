#include<bits/stdc++.h>
using namespace std;
int n,max1=-1,min1=999,maxp,minp,ans,t;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		if(max1<t)
		{
			max1=t;
			maxp=i;
		}
		if(min1>=t)
		{
			min1=t;
			minp=i;
		}
	}
	ans=n-minp+maxp-1;
	if(minp<maxp)
	ans--;
	cout<<ans<<endl;
	return 0;
}
