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

    int t;
    cin >> t;

    while(t--) {
        // Your code here
         int N,X,Y;
         cin >> N >> X >> Y;

         int newX = X, newY = Y;

         string S;
         cin >> S;

         bool caught = false;

         for(int i = 1 ; i <= N ; i++) {
            char dir = S[i-1];

            if(dir == 'U') Y--;
            else if(dir == 'D') Y++;
            else if(dir == 'R') X--;
            else X++;

            if(abs(X)+ abs(Y) == i) {caught  = true; break;}
         }

         if(caught) cout << "Yes" << endl;
         else cout << "No" << endl;
    }
    return 0;
}