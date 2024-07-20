#include "bits/stdc++.h"
using namespace std;

int main () {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int array[n];

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }

        int dp[n];
        dp[n-1] = array[n-1];
        
        for(int i = n-2 ;i >=0 ; i--){
            dp[i] = max(dp[i+1] + 1 , array[i]);
        }

        cout << dp[0] << endl;
    }

    return 0;
}