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
    vll a;
    vint b;

    vector<pair<ll,ll> > myArr;

    int t;
    cin >> t;

    while(t--) {
        // Your code here
         ll n, k;
         cin >> n >> k;
         a.resize(n);
         b.resize(n);
         myArr.clear();

         for(int i = 0 ; i < n ; i++) cin >> a[i];
         for(int i = 0 ; i < n ; i++) cin >> b[i];

         for(int i = 0 ; i < n ; i++) myArr.push_back(make_pair(a[i],b[i]));

         sort(myArr.begin(), myArr.end());

         for(int i = 0 ; i < n ; i++) a[i] = myArr[i].first, b[i] = myArr[i].second;


        int mid = (n-1)/2;
        ll median = a[mid];
        ll alt_median = a[(mid-1 >= 0) ? (mid-1) : (0)];

        if((b[(mid-1 >= 0) ? (mid-1) : (0)] == 1 && alt_median + k < median)){
            swap(median , alt_median);
        }else if( (b[mid] == 1 && median + k > a[(mid+1 >= 0) ? (mid+1) : (mid)])){
            median = a[mid+1];
        }

        ll answer = -1LL;


        for(int i = 0; i < n; i++){
            if(i == mid){
                answer = max(answer,(median + (b[mid] == 1 ? (k) : (0)) + alt_median));
            }else{
                if(b[mid] == 1 || b[i] == 1){
                    answer = max(answer,(median + (b[mid] == 1 ? (k) : (0)) + alt_median));
                }else{
                    answer = max(answer, median + ( min(k, (mid+1 < n) ? (a[mid+1]) : (a[mid]) )) + a[mid]);
                }
            }
        }

        cout << answer << endl;

    }
    return 0;
}