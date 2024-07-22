#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,m;
        cin >> n >> m;

        int fM [n][m];
        int sM [n][m];
        unordered_map<int,int> mapping;

        // input the first matrix
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> fM[i][j];
                mapping[fM[i][j]]++;
            }
        }

        // input second matrix
        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> sM[i][j];
                mapping[sM[i][j]]--;
            }
        }

        bool checker = false;

        for( auto [key, value] : mapping){
            if(value != 0) {checker = true; break;}
        }

        if(!checker) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}