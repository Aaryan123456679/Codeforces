#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define pb push_back
#define mp make_pair
#define F first 
#define unmp unordered_map<int,int>
#define S second 
#define all(x) x.begin(),x.end()
#define sortasc(x) sort(all(x))
#define sortdes(x) sort(x.rbegin(),x.rend())
#define PI 3.1415926535897932384626
const int mod = 1000000007;


bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}
void solve(){
    int x;
    cin >> x;
    int xx = x;
    while (!isPowerOfTwo(xx)) {
        xx++;
    }
    int yy = x;
    while (!isPowerOfTwo(yy)) {
        yy--;
    }
    int n = log2(xx);
    int nn = log2(yy);
    vi arr1(n+1);
    vi arr2(nn+1);
    arr1[n-1] = 1;
    xx-= pow(2,n-1);
    arr2[nn-1] =1;
    yy-= pow(2,nn-1);

    for(int i=n-2;i>=0;i--){
        if(arr1[i+1]==0){
            if(xx>0){
                if(xx>=pow(2,i)){
                    arr1[i] =1;
                    xx-= pow(2,i);
                }
            } else if(xx<0){
                if(xx<=pow(2,i)){
                    arr1[i] =-1;
                    xx+= pow(2,i);
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    // for(int i=nn-2;i>=0;i--){
    //     if(arr2[i+1]==0 && yy>=abs(pow(2,i))){
    //         arr2[i] =1;
    //     }
    // }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}