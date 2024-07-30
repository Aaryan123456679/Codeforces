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
        int limit = 0;

        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> answer;

        while((limit++ <= 40) && (accumulate(arr.begin(), arr.end(), 0) != 0)){
            int maxi = *max_element(arr.begin(), arr.end());
            int mini = *min_element(arr.begin(), arr.end());

            for(int i = 0 ; i < n ; i ++){
                arr[i] = abs(arr[i] - ((maxi+mini)/2));
            }

            answer.push_back((maxi+mini)/2);
        }

        if(limit > 40) cout << -1 << endl;
        else {
            cout << limit - 1 << endl;
            for(int i = 0; i < answer.size(); i++) {
                cout << answer[i];
                if(i != answer.size() - 1) cout << " "; 
            }
            cout << endl;
        }
    }
    return 0;
}