#include<iostream>
#include<algorithm>
using namespace std;
int a[200001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1);
		long long ans=0,i=0,j=0,x=0;
		while(i<=n)
		{
			i++;
			x+=a[i];
			while(x>k||a[i]-a[j]>1) x-=a[j],j++;
			ans=max(ans,x);
		}
		cout<<ans<<endl;
	}
	return 0;
}