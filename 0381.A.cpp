#include<bits/stdc++.h>
using namespace std;
int n,ans1,ans2,p1=1,p2,cnt=1;
int a[1005];

int main(){
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
scanf("%d",&n);
p2=n;
for(int i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
while(cnt<=n)
{
	
	 if(cnt&1)
	 ans1+=max(a[p1],a[p2]);
	 if(cnt%2==0)
	 ans2+=max(a[p1],a[p2]);
	 if(a[p1]>a[p2])
	 {
	 	p1++;
	 	cnt++;
	 	continue;
	 }
	 if(a[p2]>=a[p1])
	 {
	 	p2--;
	 	cnt++;
	 	continue;
	 }
}
printf("%d %d",ans1,ans2);
	return 0;
 } 
