#include<bits/stdc++.h>
using namespace std;
int a[105],s[105];
int main()
{
	int n,l,r;
	//freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	scanf("%d",&n);
	memset(s,0x00,sizeof(s));
	for(int i=1;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i];
		
	}
	scanf("%d%d",&l,&r);
	printf("%d",s[r-1]-s[l-1]);
	return 0;
 } 
