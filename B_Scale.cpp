#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<vector<int> > arr, finalMatrix;
    while(t--){
        int n,k;
        cin >> n >> k;

        arr.clear();

        for(int i = 0; i < n; i++){
            vector<int> row;
            for(int j = 0 ;  j < n ; j++){
                char x;
                cin >> x;
                row.push_back(x-'0');
            }
            arr.push_back(row);
        }

        finalMatrix.clear();

        for(int i = 0 ; i < n ; i += k){
            vector<int> row;
            for(int j = 0 ; j < n; j += k){
                row.push_back(arr[i][j]);
            }
            finalMatrix.push_back(row);
        }

        for(int i = 0; i < n/k; i++){
            for(int j = 0 ; j < n/k ; j++){
                cout << finalMatrix[i][j];
            }
            cout << endl;
        }
        
    }
    return 0;
}