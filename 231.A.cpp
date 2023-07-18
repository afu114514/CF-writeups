#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,c,ans=0;

//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
		scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c>=2)
	ans++;
}
printf("%d",ans);
	return 0;
 } 
