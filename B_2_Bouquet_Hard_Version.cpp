#include "bits/stdc++.h"
#define int long long
 
using namespace std;
 
void solve(){
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(auto& x : v) cin >> x;
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mp[v[i]] += x;
	}
	int mn = k;
	for(auto [a, b] : mp){
		int c = (mp.count(a+1) ? mp[a+1] : 0);
		int ck = k;
		int ac = min(ck/a, b);
		ck -= min(ck-(ck%a), a*b);
		int temp = min(ck-(ck%(a+1)), (a+1)*c);
		ck -= temp;
		c -= temp/(a+1);
		ck = max(0ll, ck - min(ac, c));
		mn = min(mn, ck);
	}
	cout << k-mn << endl;
}
 
int32_t main(){
	int tc = 1;
	cin >> tc;
	while(tc--) solve();
}