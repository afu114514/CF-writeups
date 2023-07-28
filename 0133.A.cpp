#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
	cin>>a;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='9'||a[i]=='H'||a[i]=='Q')
		{
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");

	return 0;
}
