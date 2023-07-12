#include<bits/stdc++.h>
using namespace std;
long long t,n,a,b;

int main()
{
	cin>>a>>b;
	for(long long i=1;i<=2000;i++)
	{
		if(i*i>=a*a+b*b)
		{
			n=i;
			break;
		}
	 } 
	 if(n*n==a*a+b*b)
		{
			cout<<"black"<<endl;
		}
	else if(a*b<0)
	{
		cout<<(n&1?"white":"black")<<endl;
	}
	else
	{
		cout<<(n&1?"black":"white")<<endl;
	}
	return 0;
}
