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
    map<pair<ll,ll>,ll> mapping;

    int t;
    cin >> t;

    while(t--) {
        // Your code here
         int n,x,y;
         cin >> n >> x >> y;

         vll a(n);
         
         for(int i = 0; i < n ; i++) cin >> a[i];

        mapping.clear();

        ll answer = 0;

        for(int i = 0; i < n ; i++){
            int nx = a[i]%x , ny = a[i]%y;
            if(nx == 0 && mapping.find({nx,ny})!=mapping.end()) answer += mapping[{nx,ny}];
            else if (mapping.find({x-nx,ny})!=mapping.end())  answer += mapping[{x-nx, ny}];

            mapping[{nx,ny}]++;
        }

        cout << answer << endl;
    }
    return 0;
}