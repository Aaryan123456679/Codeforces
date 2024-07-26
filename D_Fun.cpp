#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;cin>>t;
	while(t--) {
		int n,x,ans=0;cin>>n>>x;
		for(int a=1;a<n;++a) {
			for(int b=1;a*b<n;++b) {
				ans+=max(0,min(x-a-b,(n-a*b)/(a+b)));
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}