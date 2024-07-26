#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    vector<vector<int> > mappingOfA , mappingOfB;
    vector<int> mapA, mapB;

    while(t--){
        int n,q;
        cin >> n >> q;

        string a;
        cin >> a;

        string b;
        cin >> b;

        mappingOfA.resize(n+1);
        mappingOfB.resize(n+1);
        mapA.resize(26,0);
        mapB.resize(26,0);
        mappingOfA[0] = mapA;
        mappingOfB[0] = mapB;

        for(int i = 1; i <= n; i++){
            mapA[a[i-1]-'a']++;
            mappingOfA[i] = mapA;
            mapB[b[i-1]-'a']++;
            mappingOfB[i] = mapB;
        }


        for(int i = 0 ; i < q; i++){
            int l,r;
            cin >> l >> r;

            int answer = 0;

            for(int j = 0; j < 26; j++){
                if((mappingOfA[r][j]-mappingOfA[l-1][j]) != (mappingOfB[r][j]-mappingOfB[l-1][j])){
                    answer += abs((mappingOfA[r][j]-mappingOfA[l-1][j]) - (mappingOfB[r][j]-mappingOfB[l-1][j]));
                }
            }

            cout << answer/2 << endl;
        }
    }
    return 0;
}