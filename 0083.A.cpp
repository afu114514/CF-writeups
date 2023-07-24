#include<bits/stdc++.h>
using namespace std;
long long n,p=2e9,s=0,x,r;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n;	
	while(n--)
	{
		cin>>x;
		if(p!=x)
		{
			r=0;
			p=x;
		}
		r++;
		s+=r;
	}
	cout<<s<<endl;
}
