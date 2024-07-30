#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define pb push_back
#define mp make_pair
#define F first 
#define unmp unordered_map<int,int>
#define S second 
#define all(x)  x.begin(),x.end()
#define sortasc(x) sort(all(x))
#define sortdes(x) sort(x.rbegin(),x.rend())
#define PI 3.1415926535897932384626
const int mod = 1000000007;

void solve(){
    int n;
    cin >> n;
    vector<int> b(n-1);
    for(int i=0;i<n-1;i++){
        cin >> b[i];
    }
    vector<int> a(n);
    a[0] = b[0];
    for(int i=1;i<n-1;i++){
        a[i] = b[i] | b[i-1];
    }
    a[n-1] = b[n-2];
    for(int i=0;i<n-1;i++){
        if((a[i]&a[i+1])!=b[i]){
            cout << -1 << endl;
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        cout << a[i] << " ";
    }
    cout << a[n-1] << endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}