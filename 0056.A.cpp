#include<bits/stdc++.h>
using namespace std;
set<string>s{"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","ABSINTH","BEER","BRANDY",
"CHAMPAGNE","GIN","RUM","SAKE","TEQUILA","VODKA","WHISKEY","WINE"};
long long n,ans=0;	
string a;	
int main()
{
	//freopen("data.in","r",stdin);
	//freopen("data.out","w",stdout);
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(s.count(a))
		ans++;
		
	}
	cout<<ans<<endl;
	return 0;
}
