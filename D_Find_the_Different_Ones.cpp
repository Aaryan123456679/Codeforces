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
        int n ;
        cin >> n;
        vint a(n+1);
        int prev , cur;

        for(int i = 1; i <= n ; i++){
            cin >> cur;
            if(cur != prev) a[i] = i-1;
            else a[i] = a[i-1];

            prev = cur;
        }

        int q;
        cin >> q;

        for(int i = 0 ; i < q ; i++){
            int l,r;
            cin >> l >> r;
            if(a[r] >= l ) cout << a[r]  << ' ' << r << endl;
            else cout << "-1 -1" << endl;
        }

        cout << endl;
    }
    return 0;
}