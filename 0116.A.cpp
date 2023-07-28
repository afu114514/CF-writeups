#include<bits/stdc++.h>
using namespace std;
int n,a,b,ans=0,t;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		t+=b-a;
		t=max(t,0);
		ans=max(ans,t);
	}
	printf("%d",ans);

	return 0;

}
