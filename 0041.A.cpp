#include<bits/stdc++.h>
using namespace std;
stack<char >s;
string a,b;
int main()
{
	cin>>a>>b;
	for(int i=0;i<a.length();i++)
	{
		s.push(a[i]);
	}
	for(int i=0;i<b.length();i++)
	{
		if(s.top()!=b[i])
		{
			printf("NO");
			return 0;
		}
		s.pop();
	}
	printf("YES");
	return 0;
} 
