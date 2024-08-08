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
#include <cmath>


// Your definitions here

ll divide( double a , const double &b){

    ll answer = 0;

    while(a >= b){
        answer++;
        a -= b;
    }

    return answer+1;
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
        int l,r;
        cin >> l >> r;

        ll answer = 0;

        answer += 2*( divide(log10(l),log10(3)));

        for(int i = l + 1 ; i <= r ; i++){
            answer += divide(log10(i),log10(3));
        }

        cout << answer << endl;
    }
    return 0;
}