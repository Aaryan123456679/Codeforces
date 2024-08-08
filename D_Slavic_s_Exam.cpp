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
        string s,t;
        cin >> s;
        cin >> t;

        int tPtr = 0;
        string answer = "";

        for(int sPtr = 0; sPtr < s.size() && tPtr < t.size(); sPtr++){
            if(s[sPtr] == t[tPtr] || s[sPtr] == '?'){
                answer += t[tPtr++];
            }else{
                answer += s[sPtr];
            }

            if(tPtr == t.size()){
                while(sPtr < s.size()){
                    answer += s[++sPtr];
                }
            }
        }

        string finalAnswer = "";

        for(int i  = 0 ; i < s.size(); i++){
            if( answer.size() <= i || answer[i] == '?'){
                finalAnswer += 'a';
            }else{
                finalAnswer += answer[i];
            }
        }

        if(tPtr == t.size()){
            cout << "YES" << endl;
            cout << finalAnswer << endl;
            continue;
        }
        cout << "NO" << endl;
    }
    return 0;
}