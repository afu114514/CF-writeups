#include<bits/stdc++.h>
using namespace std;
string s[10];
int c[10];	
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	for(int i=0;i<3;i++)
	{
		getline(cin,s[i]);
		for(long long j=0;j<s[i].length();j++)
		{
			if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u')
			c[i]++;
		}
	}
	if(c[0]==5&&c[1]==7&&c[2]==5)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	return 0;
}
