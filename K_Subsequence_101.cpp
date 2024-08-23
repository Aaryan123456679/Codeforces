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
        
    }
    return 0;
}

vector<string> getRequestStatus(vector<string> requests) {
    unordered_map<string,int> checker;

    vector<string> answer;
    vector<bool> check5;

    int n = requests.size();

    // first pass
    for(int i = 0 ; i < min(5,n) ; i++){
        if(++checker[requests[i]] > 2) check5.push_back(false);
        else check5.push_back(true);
    }

    for(int i = 5 ; i < n ; i++){
        checker[requests[i-5]]--;
        if( ++checker[requests[i]] > 2) check5.push_back(false);
        else check5.push_back(true);
    }

    checker.clear();

    for(int i = 0 ; i < min(n,30) ; i++){
        if(++checker[requests[i]] > 5 || !check5[i]) answer.push_back("{status: 429, message: 'Too many requests'}");
        else answer.push_back("{status: 200, message: 'OK'}");
    }

    for(int i = 30 ; i < n ; i++){
        checker[requests[i-30]]--;
        if(++checker[requests[i]] > 5 || !check5[i]) answer.push_back("{status: 429, message: 'Too many requests'}");
        else answer.push_back("{status: 200, message: 'OK'}");
    }

    return answer;
}
