#include<bits/stdc++.h>
using namespace std;
long long a[114514]={0,1,1,1};
string s,ans;
int main()
{
	//freopen("data.in","r",stdin);
	for(long long i=1;i<=3;i++)
	{
		cin>>s;
		if(s[1]=='<')
		{
			a[s[2]-'A'+1]++;//a[s[0]-'A'+1]--
		}
		else
		{
			a[s[0]-'A'+1]++;//a[s[2]-'A'+1]--;
		}
	}
	if(a[0]==a[1]||a[1]==a[2]||a[2]==a[0])cout<<"Impossible";
	else{
		for(long long i=1;i<=3;i++)
		{
			ans[a[i]]=i+'A'-1;
		}
	for(long long i=1;i<=3;i++)
	cout<<ans[i];
	}
	
	return 0;
}
