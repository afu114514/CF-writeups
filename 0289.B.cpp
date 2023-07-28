#include<bits/stdc++.h>
using namespace std;
int n,m,d,k,ans;
int a[100005];
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);	
	cin>>n>>m>>d;
	for(int i=0;i<n;i++)
	for(int j=1;j<=m;j++)
	cin>>a[i*m+j];
	sort(a+1,a+1+n*m);
	k=(n*m+1)/2;
	for(int  i=1;i<=n*m;i++)
	{
		if(abs(a[i]-a[k])%d!=0)
		{
			cout<<"-1";
			return 0;
		}
		else
		{
			ans+=abs(a[i]-a[k])/d;
		}
	}
	cout<<ans;
	return 0;
 } 
