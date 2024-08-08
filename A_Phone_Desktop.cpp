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
        int x,y;
        cin >> x >> y;

        //cout << x << " " << y << endl;

        int answer = 0;

        while(y > 1) {
            y -= 2;
            answer++;
        }

        //cout << "INIT ANS " << answer << endl;

        x -= (answer*7);

        answer += y;

        x -= 11*y;

        while(x > 0){
            answer++;
            x -= 15;
        }

        //cout << "X after op " << x << endl;

        cout << answer  << endl;
    }
    return 0;
}