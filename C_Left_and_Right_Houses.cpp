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

int get(int n, int i){
    return (int)abs((double)n/2.0 - i);
}


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
        string houses;
        cin >> houses;

        int cnt0 = 0, cnt1 = 0;
        vint left(n+1),right(n+1);

        for(int i = 0 ; i < n ; i++){
            if(houses[i] - '0' == 0) cnt0++;
            else cnt1++;

            left[i+1] = cnt0 >= cnt1 ? 0 : cnt1 > cnt0 ? 1 : 0;
        }

        cnt1 = 0, cnt0 = 0;

        for(int i = n ; i >= 1 ; i--){
            if(houses[i-1] - '0' == 0) cnt0++;
            else cnt1++;

            right[i] = cnt0 > cnt1 ? 0 : cnt1 > cnt0 ? 1 : 1;
        }

        int ans = 1e9;

        if(cnt1 >= cnt0) ans = 0;
        else ans = n;

        if(cnt1 == n) {
            cout << 0 << endl;
            continue;
        }else if(cnt0 == n){
            cout << n << endl;
            continue;
        }

        for(int i = 1; i < n ; i++){
            if(left[i] == 0 && right[i+1] == 1)
                ans = (get(n, ans) < get(n, i)) ? (ans) : (get(n,ans) == get(n,i)) ? (ans < i) ? (ans) : (i) : i;
        }

        cout << ans << endl;
    }
    return 0;
}