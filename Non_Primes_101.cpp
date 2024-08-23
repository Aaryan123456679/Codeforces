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

vector<bool> sieveOfEratosthenes(int maxN) {
    vector<bool> isPrime(maxN + 1, true);
    isPrime[1] = false; 
    isPrime[0] = true;
    
    for (int p = 2; p * p <= maxN; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= maxN; i += p) {
                isPrime[i] = false;
            }
        }
    }
    return isPrime;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // declare global data structures here 
    set<int> st;
    unordered_map<int,vector<int> > map;
    

    // make sieve


    vector<bool> sieve = sieveOfEratosthenes(200);

    int t;
    cin >> t;

    while(t--) {
        // Your code here
         int n;
         cin >> n;

        st.clear();
        map.clear();

         for(int i = 1 ; i <= n ; i++) {int x ; cin >> x ; st.insert(x); map[x].push_back(i);}

         pair<int,int> answer = make_pair(-1,-1);

         for(auto num1 : st) {
            for(int i = 1 ; i < 201 ; i++){
                if(!sieve[i] && st.count(i - num1) != 0 && ( i != 2*num1 || (map[num1].size() > 1))){
                    if(i != 2*num1)
                        answer = make_pair(map[num1][0] , map[i-num1][0]);
                    else answer = make_pair(map[num1][0] , map[num1][1]);
                    break;
                }
            }
            if(answer.first != -1) break;
         }

         if(answer.first == -1) cout << -1 << endl;
         else cout << answer.first << " " << answer.second << endl;
    }
    return 0;
}