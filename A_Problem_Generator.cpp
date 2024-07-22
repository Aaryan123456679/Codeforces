#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[7] = {0};
        int m , n ;
        cin >> n >> m;
        for(int i = 0; i < n; i++){
            char temp ;
            cin >> temp;
            arr[temp-'A']++;
        }

        int answer = 0;

        for(int i = 0 ; i <7; i++){
            if(arr[i] < m) answer += m - arr[i];
        }

        cout << answer << endl;
    }
}