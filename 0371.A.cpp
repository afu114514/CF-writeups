#include<bits/stdc++.h>
using namespace std;
int a[105];
int n,k,ans1,ans2,sum;

int main()
{
	//freopen("data.in","r",stdin);
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=k;i++)
	{
		ans1=ans2=0;
		for(int j=i;j<=n;j+=k)
		{
			if(a[j]==1)
			ans2++;
			else
			ans1++;
		}
		sum+=min(ans1,ans2);
		}	
		cout<<sum;
	return 0;
 }
