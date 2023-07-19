#include<bits/stdc++.h>
using namespace std;
string s;
int a=0,b=0;
int main()
{
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if('A'<=s[i]&&s[i]<='Z')
		a++;
		if('a'<=s[i]&&s[i]<='z')
		b++;
	}
	if(a<=b)
	{
		for(int i=0;i<s.length();i++)
		{
			if('A'<=s[i]&&s[i]<='Z')
			s[i]+='a'-'A';
		}
	}
	else
	{
		for(int i=0;i<s.length();i++)
			if('a'<=s[i]&&s[i]<='z')
			s[i]+='A'-'a';
	}
	for(int i=0;i<s.length();i++)
	printf("%c",s[i]);

	

	return 0;
}
