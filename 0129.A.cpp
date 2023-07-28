#include<bits/stdc++.h>
using namespace std;
int a[105];

int main()
{
	int n,sum=0,t,ans=0;
	scanf("%d",&n);
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
for(int i=1;i<=n;i++){
	scanf("%d",&a[i]);
	sum+=a[i];
}
for(int i=1;i<=n;i++)
{
	t=sum-a[i];
	if(!(t&1))
	ans++;
}
printf("%d",ans);

	return 0;
 } 
