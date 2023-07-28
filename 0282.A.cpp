#include<bits/stdc++.h>
using namespace std;
int n,ans;
string s;

int main()
{
//	freopen("data.in","r",stdin);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		if(s[1]=='+')
		ans++;
		else
		ans--;
	}
	printf("%d",ans);
	return 0;

}
