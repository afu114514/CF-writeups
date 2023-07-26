#include<bits/stdc++.h>
using namespace std;
long long a[10],t,x,y;
int main()
{
	//freopen("data.in","r",stdin);
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	cin>>t;
	a[t]=1;
	for(long long i=1;i<=3;i++)
	{
		cin>>x>>y;
		swap(a[x],a[y]);
	}
	for(long long i=1;i<=3;i++)
	{
		if(a[i]==1)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}
