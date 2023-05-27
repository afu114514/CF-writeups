#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long t;
string s;
int a[30];
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>s;
		int a[30],t=0;
		memset(a,0x00,sizeof(a));
		for(long long i=0;i<s.length();i++)
		{
			a[s[i]-'a'+1]++;
		}
		for(long long i=1;i<=26;i++)
		{
			if(a[i]>=2)
			t++;
		}
		cout<<(t>=2?"YES":"NO")<<endl;
	}
	return 0;
}
(strings , 800)
