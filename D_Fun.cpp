#include <bits/stdc++.h>
using namespace std;
// Your definitions here

int main() {
    int t;
    cin >> t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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