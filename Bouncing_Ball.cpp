#include <bits/stdc++.h>
using namespace std;
#define ll signed long long int
#define vvint vector<vector<int> >
#define vint vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define all(x) x.begin,x.end
#define sort(x) sort(all(x))
#define rev(x) reverse(all(x))
#define sortdes(x) sort(x.rbegin(), x.rend())
#define PI 3.1415926535897932384626
#define graphmap unordered_map<int,vint>
#define graph vector<vector<int> >
#define graphmapwithEdge unordered_map<int,pair<int,int> >
#define graphwithEdge vector<pii>
#define F first
#define S second
#define mp make_pair


// Your definitions here


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // declare global data structures here 

    int t;
    cin >> t;

    while(t--) {
        // Your code here
        ll n;
        cin >> n;

        vll a(n);

        ll sum = 0;

        for(int i = 0; i < n; i++){ cin >> a[i]; sum += a[i];}

        ll curSum = 0 , ans = 0;

        for(int i = 0; i < n ; i++){
            curSum += a[i];
            ll remSum = sum - curSum;
            if(a[i] == 0 ){
                ans += (remSum == curSum);
                ans += (remSum == curSum);
                ans += (remSum == (curSum+1));
                ans += ((remSum+1) == curSum);
            }
        }

        cout << ans << endl;
    }
    return 0;
}