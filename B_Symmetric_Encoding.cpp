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
//#define sort(x) sort(all(x))
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
    set<char> st;
    vector<char> vec;
    unordered_map<char,char> chMapping;

    int t;
    cin >> t;

    while(t--) {
        // Your code here
        st.clear();

        int n;
        cin >> n;
        string s;
        cin >> s;

        for(int i = 0 ; i < n ; i++){
            st.insert(s[i]);
        }

        vec.clear();

        for(auto s : st) vec.push_back(s);

        sort(vec.begin(), vec.end());

        chMapping.clear();

        int m = vec.size();

        for(int i = 0 ; i < m ; i++){
            chMapping[vec[i]] = vec[m-i-1];
        }

        string answer = "";

        for(int i = 0 ; i < n ; i++) answer += chMapping[s[i]];

        cout << answer << endl;

    }
    return 0;
}