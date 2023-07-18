#include<bits/stdc++.h>
using namespace std;
long long t,n,m,k;
string  s;
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>s;
		if((s[0]=='y'||s[0]=='Y')&&(s[1]=='E'||s[1]=='e')&&(s[2]=='s'||s[2]=='S'))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;	
	}	
	return 0;
}
