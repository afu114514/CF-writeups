#include<bits/stdc++.h>
using namespace std;
int n;
int a,b,c,x,y,z;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y>>z;
		a+=x;
		b+=y;
		c+=z;
	}
	if(a==0&&b==0&&c==0)
	{
		printf("YES");
		return 0;
	}
	else
	{
		printf("NO");
	}
	return 0;	
}
