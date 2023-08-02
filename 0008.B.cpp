#include<bits/stdc++.h>
using namespace std;
string s;
long long  v[405][405];
long long x=200,y=200,j=0;
int main()
{
	//freopen("data.in","r",stdin);
	cin>>s;
	memset(v,0x00,sizeof(v));
	for(long long i=0;i<s.length();i++)
	{
		v[x+1][y]++,v[x-1][y]++,v[x][y+1]++,v[x][y-1]++;
		s[i]=='L'?x--:s[i]=='R'?x++:s[i]=='U'?y++:y--;
		if(v[x][y]>1)
		j=1;
	}
	if(j)
	cout<<"BUG"<<endl;
	else
	cout<<"OK"<<endl;
	return 0;
}
