#include<bits/stdc++.h>
using namespace std;
int n,k,a[105],ans;
int main()
{
//	freopen("data.in","r",stdin);
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(int i=1;i<=k;i++)
	{
		if(a[i]>0)
		ans++;
		else
		{
			cout<<ans<<endl;
			return 0;
		}
	}
	for(int i=k+1;i<=n;i++)
	{
		if(a[i]==a[k])
		{
			ans++;
		}
		else
		{
			cout<<ans<<endl;
			return 0;
		}
	}
	cout<<ans<<endl;
	return 0;

}
