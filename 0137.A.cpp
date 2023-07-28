#include<bits/stdc++.h>
using namespace std;
long long ans=0,t=0;
string s;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>s;
	for(long long i=0;i<s.length();i++)
	{
		if(i==0||(s[i]==s[i-1]))
		{
			if(t<5)
			{
				t++;
			}
			else
			{
				ans++;
				t=1;
			}
		}
		else
		{
			ans++;
			t=1;
		}	
	}
	
	cout<<ans+1<<endl;
	return 0;
}
