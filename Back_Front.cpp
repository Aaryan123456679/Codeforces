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

    vint a(26);
    vector<char> div2 = {'a','b','c','k'};
    vector<char> div2plus = {'f','o','r','n','t'};

    int t;
    cin >> t;

    while(t--) {
        // Your code here
        int n;
        cin >> n;
        string s;
        cin >> s;

        a.resize(26,0);

        int answer = n;

        for(int i = 0; i < n ; i++){
            if(s[i] == 'f') a[5]++;
            else if(s[i] == 'r' && a[17]+1 <= a[5]) a[17]++;
            else if(s[i] == 'o' && a[14]+1 <= a[17]) a[14]++;
            else if(s[i] == 'n' && a[13]+1 <= a[14]) a[13]++;  
            else if(s[i] == 't' && a[19]+1 <= a[13]) a[19]++;
        }

        int fronts = 0;

        if(a[19] > 0){
            fronts += a[19];

            n -= fronts*4;

            int temp = fronts;

            if(fronts >= (a[13] - a[19])){
                fronts -= (a[13] - a[19]);
            }
        }


    }
    return 0;
}