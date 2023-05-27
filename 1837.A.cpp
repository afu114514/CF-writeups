#include<bits/stdc++.h>
using namespace std;
long long t,a,b;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a%b==0)
		{
			cout<<2<<endl;
			cout<<a-1<<" "<<1<<endl;
		}
		else 
		{
			cout<<1<<endl;
			cout<<a<<endl;
		}
	}
	return 0;
}

