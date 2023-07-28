#include<bits/stdc++.h>
using namespace std;
int x,y,z,nx,ny,nz;
int main()
{
	scanf("%d%d%d%d%d%d",&nx,&ny,&nz,&x,&y,&z);
	int a[10];
	int ans=0;
	for(int i=0;i<6;i++)
	scanf("%d",&a[i]);
	if(nz<0)
	ans+=a[2];
	if(nz>z)
	ans+=a[3];
	if(nx<0)
	ans+=a[4];
	if(nx>x)
	ans+=a[5];
	if(ny<0)
	ans+=a[0];
	if(ny>y)
	ans+=a[1];
	printf("%d",ans);
	
	
	return 0;
	
 } 
