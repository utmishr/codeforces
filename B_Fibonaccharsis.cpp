#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f[110];
	f[1]=0,f[2]=1;
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		if(k>28)
		{
			cout<<0<<endl;
			continue;
		}
		int ans=0;
		for(int i=n;i;i--)
		{
			int cnt=0,now=i,flag=1,last=n;
			while(cnt<k-2)
			{
				int num=last-now;
				if(num>now)
				{
					flag=0;
					break;
				}
				last=now,now=num;
				cnt++;
			}
			if(flag)  ans++;
		}
		cout<<ans<<endl;
	}
}