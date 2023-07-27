#include<bits/stdc++.h>
using namespace std;
long long n,a,b,l,r,k;
string s;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>n>>a>>b;
	cin>>s;
	if(s.length()<(n*a)||s.length()>(b*n))
	{
		cout<<"No solution"<<endl;
		return 0;
	}
	else
	{
		for(int i=0;i<(n-1)*(s.length()/n);i++)
    	{
        cout<<s[i];
        if((i+1)%(s.length()/n)==0)
        {
            cout<<endl;
        }
    	}
    	for(int i=(n-1)*(s.length()/n);i<s.length();i++)  
    	{
        cout<<s[i];
    	}
	}
	return 0;
}
