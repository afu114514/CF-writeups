#include<bits/stdc++.h>
using namespace std;
long long t,n,k,b,s;
	
	
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>b>>s;
		if(s<k*b||s>n*(k-1)+k*b)
		{
			cout<<"-1"<<endl;
			continue;
		}
		else
		{
			if(s>=k*b+k-1)
			{
				cout<<k*b+k-1<<" ";
				s-=k*b+k-1;
			}
			else
			{
				cout<<k*b<<" ";
				s-=k*b;
			}
			for(long long i=2;i<=n;i++)
			{
				if(s>=k-1)
				{
					cout<<k-1<<" ";
					s-=k-1;
				}
				else
				{
					cout<<s<<" ";
					s=0;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
