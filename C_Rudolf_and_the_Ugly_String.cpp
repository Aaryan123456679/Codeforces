#include <bits/stdc++.h>
using namespace std;
// Your definitions here

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int answer = 0;

        for(int i = 0; i < n-2; i++){
            if((s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p') ) {
                answer++;
                if(i+4 < n && s[i+3] == 'i' && s[i+4] == 'e'){
                    i+=2;
                }
                i+=2;
            }else if((s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e')){
                answer++;
                i+=2;
            }
        }

        cout << answer << endl;
    }
    return 0;
}