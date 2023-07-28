#include<bits/stdc++.h>
using namespace std;
string s;
int a[100];

int main()
{
	//freopen("data.in","r",stdin);
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		a[s[i]-'A'+1]++;
	}
		cin>>s;
	for(int i=0;i<s.length();i++)
	{
		a[s[i]-'A'+1]++;
	}
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		a[s[i]-'A'+1]--;
	}
	for(int i=1;i<=26;i++)
	{
		if(a[i]!=0)
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	
	return 0;
 } 
