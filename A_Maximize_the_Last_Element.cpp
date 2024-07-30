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
        
        vector<int> arr(n);

        for(int i = 0 ; i < n ; i++) cin >> arr[i];

        int answer = -1e9;

        for(int i = 0 ; i < n; i+= 2){
            answer = max(answer, arr[i]);
        }

        cout << answer << endl;
    }
    return 0;
}