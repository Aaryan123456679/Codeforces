#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vint vector<int>
#define vvi vector<vector<int>>

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
        while(t--){
            int n;
        cin >> n;
        vint a(n), b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        vint x = b;
        reverse(x.begin(),x.end());
        if(a==b){
            cout << "Bob" << endl;
        } else if(a == x){
            cout << "Bob" << endl;
        }
        else {
            cout << "Alice" << endl;
        }
    }
    return 0;
}