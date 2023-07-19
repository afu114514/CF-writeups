#include<bits/stdc++.h>
using namespace std;
long long n,t;


int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n;
		stack<long long >s;
		for(long long i=9;i>=1;i--)
		{
			if(n>=i)
			{
				n-=i;
				s.push(i);
			}
		}
		while(!s.empty())
		{
			cout<<s.top();
			s.pop();
		}
		cout<<endl;
	}
	return 0;
}
