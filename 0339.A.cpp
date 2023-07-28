#include<bits/stdc++.h>
using namespace std;
string s;
int a[1000];
int t=0;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='+')
		a[++t]=s[i]-'0';
	}
	sort(a+1,a+1+t);
	for(int i=1;i<t;i++)
	{
		printf("%d+",a[i]);
	}
	printf("%d",a[t]);
	return 0;

}
