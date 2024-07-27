#include <bits/stdc++.h>
using namespace std;
// Your definitions here

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // declare global data structures here 

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int answer = 0, cur_num;

        for(int x = 2 ; x <= n; x++){
            int k = n/x;

            if(answer < ((k+1)*k*x/2) ){
                answer = ((k+1)*k*x/2);
                cur_num = x;
            }
        }

        cout << cur_num << endl;
    }
    return 0;
}