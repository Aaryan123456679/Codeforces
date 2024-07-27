#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll _=2e5+5;
ll N,n,m,q,k,x,l,r,ans,a[_],b[_],s[_],i,g;
void P(){
	cin>>q>>n>>m>>k;n--;k++;
	for(g=0;g<q;g++){
		cin>>x;l=r=0;a[0]=1;b[0]=0;
		for(i=1;i<=n;i++){
			cin>>x;x++;
			while(b[l]<i-k)l++;
			while(a[l]+x<=a[r])r--;
			a[++r]=a[l]+x;b[r]=i;
		}
		s[g]=a[r];
	}
	for(x=g=0;g<m;g++)x+=s[g];
	for(ans=x;g<q;g++){
		x+=s[g]-(g<m?0:s[g-m]);
		ans=min(ans,x);
	}
	cout<<ans<<'\n';
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>N;while(N--)P();
}