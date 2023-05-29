#include<bits/stdc++.h>
using namespace std;
int n,fz=0,fm,g;
int deal(int k,int x)
{
	int sum=0;
	while(x>0)
	{
		sum+=x%k;
		x/=k;
	
	}
	return sum;
}
int gcd(int x,int y)
{
	return y?gcd(y,x%y):x;
}
int main()
{
	cin>>n;
	for(int i=2;i<=n-1;i++)
	{
		fz+=deal(i,n);
	}
	g=gcd(fz,n-2);
	cout<<fz/g<<'/'<<(n-2)/g<<endl;
	return 0;
}
 
