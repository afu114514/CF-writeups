
#include<bits/stdc++.h>

using namespace std;
long long t;
string s1="codeforces",s2;


int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		long long ans=0;
		cin>>s2;
		for(long long i=0;i<s2.length();i++)
		{
			if(s2[i]!=s1[i])
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
