#include<bits/stdc++.h>
using namespace std;
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	int ans=0,num=0;
	string s;
	while(getline(cin,s)){
		if(s[0]=='+')
		num++;
		if(s[0]=='-')
		num--;
		else
		{
			for(int i=1;i<=s.length();i++)
			{
				if(s[i]==':')
				{
					int t=s.length()-i-1;
					ans+=num*t;
					break;
				}
			}
		}
	}
	printf("%d",ans);
	return 0;
	
 } 
