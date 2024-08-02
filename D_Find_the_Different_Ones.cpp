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
        vint a(n);

        for(int i = 0 ; i < n ; i++) cin >> a[i];

        int q;
        cin >> q;

        vint front, back;

        for(int i = 0; i < n-1; i++){
            int j = i+1;
            while( j < n && a[i] == a[j]) j++;
            if(j != n){back.push_back(i); front.push_back(j);}

            i = j-1;
        }

        for(int i = 0 ; i < q ; i++){
            int l,r;
            cin >> l >> r;
            l--;r--;

            int backBound = lower_bound(back.begin(), back.end(), l) - back.begin();
            int frontBound = lower_bound(back.begin(), back.end(), r) - back.begin(); 

            if(backBound >= back.size()) {
                cout << -1 << " " << -1 << endl;
            }else if(frontBound >= back.size()){
                if( front[backBound] > r || back[backBound] < l){
                    cout << -1 << ' ' << -1 << endl;
                }else{
                    cout << back[backBound]+1 << ' ' << front[backBound]+1 << endl;
                }
            }else{
                int first = -1 , second = -1;
                for(int i = backBound ; i < frontBound + 1 ; i++){
                    if(back[i] >= l && front[i] <= r){
                        first = back[i] + 1;
                        second = front[i] + 1;
                        break;
                    }
                }

                cout << first << ' ' << second << endl;
            }
        }

        cout << endl;
    }
    return 0;
}