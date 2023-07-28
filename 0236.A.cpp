#include<bits/stdc++.h>
using namespace std;
string s;
int v[30],t=0;
int main()
{
//	freopen("data.in","r",stdin);
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		v[s[i]-'a'+1]=true;
	}
	for(int i=1;i<=26;i++)
	{
		if(v[i])
		t++;
	}
	if(t&1)
	printf("IGNORE HIM!");
	else
	printf("CHAT WITH HER!");
	return 0;

}
