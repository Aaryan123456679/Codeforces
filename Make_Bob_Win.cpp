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
    priority_queue<int,vector<int>,greater<int> > grps0, grps1;

    int t;
    cin >> t;

    while(t--) {
        // Your code here 
        int N;
        cin >> N;
        string S;
        cin >> S;
        int answer = 0;

        if(S.size() == 1) if(S[0] == '1'){ cout << 0 << endl;continue;}else{cout << 1 << endl;continue;}

        if(S[0] == '0') answer += 1;
        if(S[N-1] == '0') answer += 1;

        cout << answer << endl;
    }
    return 0;
}