(greedy , implementation , 1200)
  #include<bits/stdc++.h>
using namespace std;
long long t,n;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long ans=1,a,b=0,k;//1up -1down 
		cin>>a;
		for(long long i=1;i<n;i++)
		{
			cin>>k;
			if(k>a)
			{
				if(b!=1)
				{
				b=1;
				ans++;
				a=k;
				}
				else
				{
					a=k;
				 } 
			}
			if(k<a)
			{
				if(b!=-1)
				{
					b=-1;
					ans++;
					a=k;
				}
				else
				{
					a=k;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
