#include<bits/stdc++.h>
using namespace std;


int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a%2==1&&b%2==1)
	printf("%d",(a*b-1)/2);
	else
	printf("%d",a*b/2);

//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);

	return 0;
 } 
