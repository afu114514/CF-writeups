
#include<bits/stdc++.h>

using namespace std;
long long t=0,n;



int main()
{
//	freopen("data.in","r",stdin);
//	freopen("data.out","w",stdout);
	map <string,long long > f;
	cin>>n;
	string s;
	for(long long i=1;i<=n;i++)
	{
		cin>>s;
		f[s]++;
	}
	for(auto [team,score]:f)
	{
		if(score>f[s])
		s=team;
	 } 
	 cout<<s<<endl;
	return 0;
}
