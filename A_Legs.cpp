#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int answer = n/4;
        n %= 4;
        answer += (n == 0) ? (0) : (1);
        cout << answer << endl;
    }
    return 0;
}