#include<bits/stdc++.h>
using namespace std;
int a,b,ans=0;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>a>>b;
	while(a<=b)
	{
		a*=3;
		b*=2;
		ans++;
	}
	printf("%d",ans);

	return 0;

}
