#include<bits/stdc++.h>
using namespace std;
string s;
long long a[30],t=0;
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>s;
	memset(a,0x00,sizeof(a));
	for(long long i=0;i<s.length();i++)
	{
		a[s[i]-'a'+1]++;
	}
	for(long long i=1;i<=26;i++)
	{
		if(a[i]&1)
		t++;
	}
	cout<<((t&1||t==0)?"First":"Second")<<endl;
	return 0;
}
