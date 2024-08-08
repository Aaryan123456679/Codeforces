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
    vector<pair<int,int> > vec;

    int t;
    cin >> t;

    while(t--) {
        // Your code here
        int n , s , m;
        cin >> n >> s >> m;

        vec.clear();

        for(int i = 0 ; i < n ; i++){
            int a , b;
            cin >> a >> b;
            vec.push_back(make_pair(a,b));
        }

        bool given = false;

        for(int i = 1 ; i < n ; i++){
            if( vec[i].first - vec[i-1].second >= s) given = true;
        }

        if( m - vec[n-1].second >= s) given = true;
        if(vec[0].first >= s) given = true;


        cout << ((given) ? ("YES") : ("NO")) << endl;

    }
    return 0;
}