#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int cnt = 0;
        string s;
        cin >> s;
        int cur = s[0];
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] != cur){swap(s[0], s[i]);}
        }

        if(s[0] != cur){cout << "YES" << endl << s << endl;}
        else cout << "NO" << endl;

    }
    return 0;
}