#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        if(s=="") {
            cout<< "0" << endl;
        }
        int cnt =1;
        int temp =0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='1' && s[i+1]=='0'){
                cnt++;
            }
            if(s[i]=='0' && s[i+1]=='1'){
                temp++;
            }
        }
        if(temp>1){
            cout << cnt + temp-1 << endl;
        }
        else {
            cout << cnt << endl;
        }
    }
}