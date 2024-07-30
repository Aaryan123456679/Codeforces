#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vint vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(x) x.begin(), x.end()
#define rev(x) reverse(all(x))
#define sortdes(x) sort(x.rbegin(), x.rend())
#define F first
#define S second
#define mp make_pair

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string line1, line2;
        cin >> line1 >> line2;

        int ans = 0, totalDot = 0, curDot = 0;

        for(int i = 0 ; i < n ; i++){
            if(line1[i] == '.' ) totalDot++;
            if(line2[i] == '.') totalDot++;
        }

        for(int i = 0; i < n - 1; i++) {
            if(line1[i] == '.' && line2[i] == '.'){
                curDot += 2;
                if(curDot-2 > 0  && totalDot - curDot > 0){
                    if((line1[i-1] == 'x' && line1[i+1] == 'x'))ans++;
                    if((line2[i-1] == 'x' && line2[i+1] == 'x')) ans++;
                }
            }else if(line1[i] == '.' || line2[i] == '.') curDot++;
        }

        cout << ans << endl;
    }
    return 0;
}
