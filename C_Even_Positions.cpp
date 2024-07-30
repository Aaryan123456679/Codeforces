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
         // use this as a function call if you want to in that case

         stack<int> st;
         
         int n;
         cin >> n;
         string s;
         cin >> s;

         int ans = 0;

         int cntC = 0,cntO = 0;

         for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                //cout << "Pushing element " << i << " into the stack" << endl;
                st.push(i);
                cntO++;
            }
            else if(s[i] == ')' ){
                //cout << "Popping element " << i << "From Stack" << endl; 
                ans += i - st.top();
                st.pop();
                cntC++;
            }else{
                if(cntC >= cntO){
                    //cout << "Replacing _ with ( at " << i << endl;
                    cntO++;
                    st.push(i);
                }else{
                    //cout << "Replacing _ with ) at " << i << endl;
                    cntC++;
                    ans += i - st.top();
                    st.pop();
                }
            }
         }

         cout << ans << endl;
        // solve()
    }
    return 0;
}