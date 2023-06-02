#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{	
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	int n,d,ans=0;
	 scanf("%d%d",&n,&d);
	 for(int i=1;i<=n;i++)
	 scanf("%d",&a[i]);
	 for(int i=1;i<n;i++)
	 for(int j=i+1;j<=n;j++)
	 {
	 	if(abs(a[i]-a[j])<=d)
	 	ans++;
	 }
	 printf("%d",ans*2);


  
	return 0;
 } 
