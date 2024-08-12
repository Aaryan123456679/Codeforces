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
    vint parents, permutation,pos;

    int t;
    cin >> t;

    while(t--) {
        // Your code here
         int n,q;
         cin >> n >> q;

         parents.resize(n+1);
         parents[1] = 1;

        for(int i = 2 ; i <=n ; i++) cin >> parents[i];

        permutation.resize(n+1);

        for(int i = 1; i <= n ; i++) cin >> permutation[i];

        //newP.resize(n+1,0);
        int positions = 0;
        pos.resize(n+1);

        for(int i = 1 ; i <= n ; i++) pos[permutation[i]] = i;

        for(int i = 1 ; i <= n ; i++) if( pos[parents[permutation[i]]] > pos[permutation[i]]) positions++;


        for(int i =  0 ; i < q ; i++) {
            int f,l;
            cin >> f >> l;
            if( (pos[parents[permutation[l]]] >= pos[permutation[f]]) &&  (pos[parents[permutation[l]]] <= pos[permutation[l]]) ){
                positions++;
            }else if( (pos[parents[permutation[l]]] <= pos[permutation[f]]) && (pos[parents[permutation[l]]] >= pos[permutation[l]]) ){
                positions--;
            }

            if( (pos[parents[permutation[f]]] >= pos[permutation[l]]) &&  (pos[parents[permutation[f]]] <= pos[permutation[f]]) ){
                positions++;
            }else if( (pos[parents[permutation[f]]] <= pos[permutation[l]]) && (pos[parents[permutation[f]]] >= pos[permutation[f]]) ){
                positions--;
            }

            swap(permutation[l], permutation[f]);
            swap(pos[permutation[l]], pos[permutation[f]]);

            if( positions == 0 ) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }
    return 0;
}