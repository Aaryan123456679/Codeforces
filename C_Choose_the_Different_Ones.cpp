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
#define mySort(x) sort(all(x))
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
        int n , m , k;
        cin >> n >> m >> k;

        vint a(n),b(m);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];


        set<int> Sta, Stb;

        for(int i = 0; i < n ; i++){
            if(a[i] > k) continue;
            Sta.insert(a[i]);
        }
        for(int i = 0; i < m ; i++){
            if(b[i] > k) continue;
            Stb.insert(b[i]);
        }

        int sizeA = Sta.size(), sizeB = Stb.size();

        for(int elem : Stb) Sta.insert(elem);

        int common = sizeA + sizeB - Sta.size();

        if(sizeA + sizeB - common == k && sizeA >= k/2 && sizeB >= k/2 ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}