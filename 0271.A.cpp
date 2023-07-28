#include<bits/stdc++.h>
using namespace std;

int n,a,b,c,d;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>n;
	while(n++)
	{
		int a=n/1000;
		int b=n/100-10*a;
		int d=n%10;
		int c=(n%100-d)/10;
		if(a!=b&&b!=c&&c!=d&&a!=c&&b!=d&&a!=d)
		{
			printf("%d",n);
			return 0;
		}
	}
	return 0;

}
