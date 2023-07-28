#include<bits/stdc++.h>
using namespace std;
int n;
int t,s;
int ans;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		if(t!=s)
		ans++;
		s=t;
	}
	printf("%d\n",ans);
	return 0;
}
