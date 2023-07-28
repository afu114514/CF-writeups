#include<bits/stdc++.h>
using namespace std;
long long  s;
int n;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>s>>n;
	while(n--)
	{
		if(s%10)
		s--;
		else
		s/=10;
	}
	printf("%lld",s);
	return 0;

}
