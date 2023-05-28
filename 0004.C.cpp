#include<bits/stdc++.h>
using namespace std;
long long  n,i;
string t;
map<string,long long >a;
int main()
{
	cin>>n;
	getline(cin,t);
	for(i=1;i<=n;++i)
	{
		getline(cin,t);
		if(a[t]!=0)
		{
			cout<<t<<a[t]<<endl;
			++a[t];
		}	
		else
		{
			cout<<"OK\n";
			a[t]=1;	
		}
	}	
	return 0;
}
