#include<bits/stdc++.h>
using namespace std;
long long n,t;
string s;
set<string >a;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		for(long long i=0;i<n-1;i++)
		{
			a.insert(s.substr(i,2));
		}
		cout<<a.size()<<endl;
		a.clear();
	}
	return 0;
}
(implementation,strings,800)
