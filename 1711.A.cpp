#include<bits/stdc++.h>
using namespace std;
long long t;
long long n;

int main()
{
//	freopen("data.in","r",stdin);
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1)
		{
			cout<<"1"<<endl;
		}
		else
		{
			for(int i=1;i<n;i++)
			cout<<i+1<<" ";
			cout<<"1"<<endl;
		}
	}
	return 0;

}
