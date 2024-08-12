#include <bits/stdc++.h>
using namespace std;
#define ll double
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
    vector<double> x,y;

    int t;
    cin >> t;

    while(t--) {
        // Your code here
         int n;
         cin >> n;
         x.resize(n),y.resize(n);

         for(int i = 0 ; i < n ; i++) cin >> x[i];
         for(int i = 0 ; i < n ; i++) cin >> y[i];

         ll mini = LLONG_MAX;

         ll x0,x1,y0,y1;
         cin >> x0 >> y0 >> x1 >> y1;

        double m = (y1-y0)/(x1-x0);
         double newM = -1/m;


         for(int i = 0 ; i < n ; i++) {

             ll dist;

             ll Y = (y1-y[i]) * (y1 - y[i]);
             ll X = (x1 - x[i]) * (x1 - x[i]);

             dist = X + Y;

             mini = min(mini, dist);


            //// slope lia
            //double c = y[i] - newM * x[i];
         }

         double min_dist = (x0-x1)*(x0-x1) + (y0-y1)*(y0-y1);

         if(mini >= min_dist ) cout << "YES" << endl;
         else cout << "NO" << endl;
    }
    return 0;
}