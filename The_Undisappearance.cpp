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
        // Your code here
         int n;
         cin >> n;
        
        vint a(n);

        for(int i = 0 ; i < n ; i++) cin >> a[i];

         int curr = 0 , answer = 0 , cnt1 = 0 , cnt2 = 0 , cnt3 = 0, back = 0; 

         for(int front = 0 ; front < n ; front++){
            if(a[front] == 1) cnt1++;
            if(a[front] == 2) cnt2++;
            if(a[front] == 3) cnt3++;

            if(!(cnt1 && cnt2 && cnt3)) curr = 0;

            while(cnt1 && cnt2 && cnt3 && (back < front)){
                curr++;
                if(a[back++] == 1) cnt1--;
                if(a[back++] == 2) cnt2--;
                if(a[back++] == 3) cnt3--;
            }

            answer += curr;
         }

         cout << answer << endl;
    }
    return 0;
}