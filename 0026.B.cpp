#include<bits/stdc++.h>
using namespace std;
long long ans;
stack<char>a; \
string s;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>s;
	for(long long i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		a.push(s[i]);
		if(s[i]==')')
		{
			if(!a.empty())
			{
				ans+=2;
				a.pop();
			}
		}
	}
	cout<<ans<<endl;
}
