#include<bits/stdc++.h>
using namespace std;
long long t,n,m,ans=0;
long long a[105];
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);

	cin>>n>>m;	
	for(long long i=1;i<=n;i++)
	cin>>a[i];
	sort(a+1,a+1+n);
	for(long long i=1;i<=n;i++)
	{
		if(a[i]<0&&i<=m)
		ans-=a[i];
		else
		break;
	}	
	cout<<ans<<endl;
	return 0;
}
