#include<bits/stdc++.h>
using namespace std;
int sum,n,ans;
int a[105];
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a+1,a+1+n);
	for(int i=n;i>=1;i--)
	{
		ans+=a[i];
		if(ans>sum/2)
		{
			printf("%d",n-i+1);
			return 0;
		}
	}
	return 0;

}
