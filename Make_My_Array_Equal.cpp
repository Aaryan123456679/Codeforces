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
    unordered_map<int,int> mapping;

    int t;
    cin >> t;

    while(t--) {
        // Your code here 

        int N;
        cin >> N;

        vector<int> A(N);
        mapping.clear();
        for(int i = 0 ; i < N ; i++){ cin >> A[i]; mapping[A[i]] ++;}

        if(mapping.size() == 1){
            cout << "YES" << endl;
        }else if(mapping.size() == 2){
            bool found0 = false;
            for(auto [key,value] : mapping){
                if(key == 0){found0 = true; break;}
            }
            if(found0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else{
            cout << "NO" << endl;
        }

         // use this as a function call if you want to in that case
        // solve()
    }
    return 0;
}