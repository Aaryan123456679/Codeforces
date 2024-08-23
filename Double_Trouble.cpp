#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
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

struct Compare {
    bool operator()(const std::pair<ll, bool>& a, const std::pair<ll, bool>& b) {
        // Compare only the long long part
        return (a.first > b.first)?(true) : (a.first == b.first) ? (a.second) : (false);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // declare global data structures here 
    priority_queue< pair<ll,bool>,vector<pair<ll,bool> >,  Compare > pq;

    const ll mod = 1e9+7;

    int t;
    cin >> t;

    while(t--) {
        // Your code here
         ll n,k;
         cin >> n >> k;

         for(ll i = 0 ;  i <  n ; i++){ll x ; cin >> x ; pq.push(make_pair(x,true));}

         while( k-- ){
            pair<ll,bool> cur = pq.top();
            pq.pop();

            cur.first *= 2;

            pq.push(cur);

            if(pq.top().first*2 >= mod && !pq.top().second) break;
            else{
                cur = pq.top();
                cur.second = false;
                pq.pop();
                pq.push(cur);
            }
         }
         ll answer = 0;

         while(!pq.empty() ){
            answer = answer + pq.top().first;

            pq.pop();
         }
         cout << answer%mod << endl;
    }
    return 0;
}