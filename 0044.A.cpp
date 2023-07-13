
#include<bits/stdc++.h>

using namespace std;
set<pair<string ,string> >s;
string a,b;
long long t;
int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		s.insert({a,b});
	}
	cout<<s.size()<<endl;
	return 0;
}  
