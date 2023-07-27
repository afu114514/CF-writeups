#include<bits/stdc++.h>
using namespace std;
string s;
long long t;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>t;
	while(t--)
	{
		for(long long i=1;i<=8;i++)
		{
			cin>>s;
			for(long long j=0;j<s.length();j++)
			{
				if(s[j]>='a'&&s[j]<='z')
				cout<<s[j];
			}
		}
		cout<<endl;
	}
	return 0;
}
