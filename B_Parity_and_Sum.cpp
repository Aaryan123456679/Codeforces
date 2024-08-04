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
//#define sort(x) sort(all(x))
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

    vll a, even;

    int t;
    cin >> t;

    while(t--) {
        // Your code here 
        ll n;
        cin >> n;
        a.resize(n);

        ll p1 = 0, p0 = 0;


        even.clear();
        ll odd = -1;
        for(int i = 0; i < n ; i++){
            cin >> a[i];

            if( a[i]%2 == 0 ) {p0++; even.push_back(a[i]);}
            else{ p1++; odd = max(odd,a[i]);}
        }
        sort( even.begin() , even.end() );


        if(p1 == n || p0 == n) {
            cout << 0 << endl;
            continue;
        }

        ll answer = 0;

        for(int i = 0 ; i < even.size(); i++){
            if(odd < even[i]){
                while(odd < even[i]){
                    odd += even[i];
                    answer++;
                }
            }

            odd += even[i];
            answer++;
        }

        cout << min(answer, p0+1) << endl;

    }
    return 0;
}