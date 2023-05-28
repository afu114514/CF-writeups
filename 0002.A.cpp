#include<bits/stdc++.h>
using namespace std;
map<string ,int >mp,mpp;
int a[100005],n,maxn=-0x3f3f3f3f;
string s[100005],s1;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>s[i]>>a[i];
		mp[s[i]]+=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		maxn=max(maxn,mp[s[i]]);
	}
	for(int i=1;i<=n;i++)
	{
		mpp[s[i]]+=a[i];
		if(mp[s[i]]==maxn&&mpp[s[i]]>=maxn)
		{
			s1=s[i];
			break;
		}
	}
	cout<<s1<<endl;
	return 0;
}
