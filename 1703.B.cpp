#include<bits/stdc++.h>

using namespace std;
int n,t,cnt=0;
bool v[30];
string s;
int main()
{
	cin>>n;
	while(n--)
	{
		memset(v,false,sizeof(v));
		cnt=0;
		cin>>t;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(v[s[i]-'A']==0)
			{
				cnt++;
				v[s[i]-'A']=1;
			}
			cnt++;
		}
		cout<<cnt<<endl;
	}
	return 0;
}
