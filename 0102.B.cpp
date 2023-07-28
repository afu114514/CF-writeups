#include<bits/stdc++.h>
using namespace std;
string s;
long long cnt,ans;
long long f(int cnt)
{
	long long sum=0;
	while(cnt>0)
	{
		sum+=cnt%10;
		cnt/=10;
	}
	return sum;
}
int main()
{
	cin>>s;
	if(s.size()==1)
	{
		printf("0");
		return 0;
	}
	for(int i=0;i<s.size();i++)
	{
		cnt+=s[i]-'0';
	}
	while(cnt>=10)
	{
		ans++;
		cnt=f(cnt);
	}
	printf("%lld",ans+1);

	return 0;	
}
