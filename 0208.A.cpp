#include<bits/stdc++.h>

using namespace std;
string s;
bool flag=true;
int main()
{
	cin>>s;
	for(int i=2;i<s.length();i++)
	{
		if(s[i]=='B'&&s[i-1]=='U'&&s[i-2]=='W')
		{
			s[i]=s[i-1]=s[i-2]=' ';
		}
	}
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=' ')
		flag=false;
		if(!flag)
		cout<<s[i];
		if(s[i]==' ')
		flag=true;	
	}
	return 0;
}
