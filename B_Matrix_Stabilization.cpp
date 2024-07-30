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

//solve(){
// your code for the function 
//}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // declare global data structures here 

    int t;
    cin >> t;

    while(t--) {
        // Your code here 
        int n,m;
        cin >> n >> m;
        vector<vll> matrix(n);

        for(int i = 0; i < n; i++){
            vll row;
            for(int j = 0; j < m;j++){
                int x;
                cin >> x;
                row.push_back(x);
            }
            matrix[i] = row;
        }

        vector<pii> dir = {{0,1}, {1,0}, {-1,0}, {0,-1}};

        for(int i = 0; i < n;i++){
            for(int j = 0; j < m ; j ++){
                ll localMax = 0;
                cout << "Iteration for " << i << ',' << j << " Cell" << "Having value :" << matrix[i][j] << endl;
                for(pii pair : dir){
                    int newCol = i + pair.F;
                    int newRow = j + pair.S;

                    if(newCol > -1 && newCol < m && newRow < n && newRow > -1){
                        localMax = max(localMax, matrix[newRow][newCol]);
                    }
                }

                cout << "Local maximum is " << localMax << endl;

                if(localMax < matrix[i][j]){
                    matrix[i][j] = localMax;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m ; j++){
                cout << matrix[i][j];
                if(j != m-1) cout << ' ';
            }
            cout << endl;
        }
         // use this as a function call if you want to in that case
        // solve()
    }
    return 0;
}