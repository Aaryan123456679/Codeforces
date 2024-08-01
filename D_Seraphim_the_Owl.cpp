#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
	
	int t;cin>>t;
	while(t--)
	{
		cin>>n>>m;long long a[n],b[n];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		long long ans=1e18;
		long long now=0;
		for(int i=n;i--;)
		{
			if(i<m)ans=min(ans,now+a[i]);
			now+=min(a[i],b[i]);
		}
		cout<<ans<<endl;
	}
}