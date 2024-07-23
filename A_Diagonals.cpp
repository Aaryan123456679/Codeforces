#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        long long rem = n;

        if(k == 0){cout << 0 << endl ; continue;}
        if(k <= n ) { cout << 1 << endl ; continue;}

        k -= n;
        
        long long subtractor = n-1;
        long long minimumDiagonals = 1;

        while( k > 0){
            k -= subtractor;
            minimumDiagonals ++;
            if(k <= 0) break;
            k -= subtractor;
            minimumDiagonals ++;
            subtractor--;
        }

        cout << minimumDiagonals << endl;
    }
    return 0;
}