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
#define sortasc(x) sort(all(x))
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
    unordered_map<int,int> mapping;
    set<int> st;
    vint a;

    int t;
    cin >> t;

    while(t--) {
        // Your code here
         int n;
         cin >> n;

         mapping.clear();
         st.clear();

         a.resize(n);

         for(int i = 0 ; i < n ; i ++) {cin >> a[i]; st.insert(a[i]);}

        vint arr(st.size(), INT_MAX);
         for(int i = 0 ; i < n; i++) {
            int elem = a[i];
         }
    }
    return 0;
}