#include "bits/stdc++.h"
using namespace std;

int main(){
    int t ;
    cin >> t;

    while(t--){
        int n,f,k;
        cin >> n >> f >> k;
        int arr[n];

        // take the input
        for(int i = 0; i < n ; i++){
            cin >> arr[i];
        }

        set<int> vec;
        vector<int> dkWhy;
        unordered_map<int,int> myMap;
        for(int num :arr){
            myMap[num]++;
            if(vec.count(num) == 0) dkWhy.push_back(num);
            vec.insert(num);
        }
        sort(dkWhy.begin(), dkWhy.end());
        reverse(dkWhy.begin(), dkWhy.end());
        
        int cur = 0, newNum;

        for(auto num : dkWhy){
            cur += myMap[num];
            newNum = num;
            if(cur >= k) break;
        }

        if(newNum < arr[f-1] || (newNum == arr[f-1] && cur == k)){
            cout << "YES" << endl;
        }else if(newNum == arr[f-1]){
            cout << "MAYBE" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
}