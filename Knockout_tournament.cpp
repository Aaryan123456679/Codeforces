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

    int t;
    cin >> t;

    while(t--) {
        // Your code here

        vector<pair<int,int> > a(16);

        for(int i = 0 ; i < 16 ; i++){
            int x;
            cin >> x;

            a[i] = make_pair(x,i);
        }

        sort(a.begin(),a.end());

        vector<pair<int, int> > finalAnswer(16);

        for(int i = 0; i < 16 ; i++){
            int answer = 0;
            answer += i > 14;
            answer += i > 6;
            answer += i > 2;
            answer += i > 0;

            finalAnswer[i] = make_pair( a[i].S , answer);
        }

        sort(finalAnswer.begin(), finalAnswer.end());

        for(int i = 0; i < 16 ; i++){
            cout << finalAnswer[i].S;
            if(i != 15){
                cout << " ";
            }
        }

        cout << endl;

    }
    return 0;
}