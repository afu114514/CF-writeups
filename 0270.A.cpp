#include<bits/stdc++.h>
using namespace std;
int n;
int t;

 
int main()
{	
	//	freopen("data.in","r",stdin);
	//	freopen("data.out","w",stdout);
	cin>>n;
	while(n--)
	{
		cin>>t;
		if(360%(180-t)==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
} 
