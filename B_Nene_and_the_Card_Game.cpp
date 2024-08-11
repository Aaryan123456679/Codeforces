#include<bits/stdc++.h>
using namespace std;
const int MAXN=4e5+5;
int cnt[MAXN];
void solve() {
	int n,ans=0;
	scanf("%d",&n);
	fill(cnt+1,cnt+n+1,0);
	for(int i=1,a;i<=n;++i) scanf("%d",&a),ans+=(++cnt[a]==2);
	printf("%d\n",ans);
}
signed main() {
	int T;
	scanf("%d",&T);
	while(T--) solve();
	return 0;
}