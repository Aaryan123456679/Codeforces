#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;

        int answer = 0;
        if(2*a > b){
            answer += (n/2) * b;
            answer += (n%2) ? (a) : (0);
        }else{
            answer += a*n;
        }

        cout << answer << endl;
    }
    return 0;
}