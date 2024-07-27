#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool falseOp = false;

        for(int i = 1; i < n - 1; i++) {
            if(arr[i - 1] != 0) {
                arr[i] = arr[i] - 2 * arr[i - 1];
                arr[i + 1] = arr[i + 1] - arr[i - 1];
                arr[i - 1] = 0;
                if(arr[i] < 0 || arr[i + 1] < 0) {
                    falseOp = true;
                    break;
                }
            }
        }

        if(falseOp || arr[n - 1] != 0 || arr[n - 2] != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
