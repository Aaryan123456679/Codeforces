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
        int n , k;
        cin >> n >> k;

        int divK = 0;

        vint a(n);
        for(int i = 0 ; i < n ; i++){ cin >> a[i]; divK += (a[i]%k == 0) ? (1) : (0) ;}

        if(divK >= 1) {cout << 0 << endl ; continue;}


        if(k == 2) {
            cout << 1 << endl; continue;
        }if(k == 5){
            int mini = 6;
            for(int i = 0 ; i < n ; i++) mini = min(mini , 5 - a[i]%5);
            cout << mini << endl;
            continue;
        }else if(k == 4){
            int div2 = 0 , mini = 5;

            for(int i = 0; i < n ; i++) {
                if(a[i]%2 == 0) div2++;

                mini = min(mini , 4 - a[i]%4);
            }

            if(div2 >= 2){ cout << 0 << endl; continue ; }
            if(div2 == 1) {cout << 1 << endl; continue;}

            cout << min(2,mini) << endl;
            
            continue;
        }
        else {
            int mini = 4;
            for(int i = 0 ; i < n ; i++) mini = min(mini , 3 - (a[i]%3));

            cout << mini << endl;
            continue;
        }

    }
    return 0;
}