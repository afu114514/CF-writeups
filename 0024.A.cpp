#include<bits/stdc++.h>
using namespace std;
long long s[105],e[105],a,b,c,n,sum,ans;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		if(s[a]||e[b])
		e[a]=s[b]=1,ans+=c;
		else
		s[a]=e[b]=1;
		sum+=c;
	}
	cout<<min(sum-ans,ans)<<endl;
	
	return 0;
}
