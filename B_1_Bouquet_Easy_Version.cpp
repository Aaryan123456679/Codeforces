#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;

        vector<int> petals(n);

        for(int i = 0; i < n ; i++) cin >> petals[i];

        //sort(petals.begin(), petals.end());

        int globalMax = 0;

        //for(int i  = 0 ; i < petals.size(); i++){
        //    int cnt = m;
        //    for(int j = i ; j < petals.size() && cnt >= 0; j++){
        //        if(petals[j] - petals[i] <= 1 && cnt >= petals[j]){
        //            cnt -= petals[j];
        //        }
        //    }
        //    globalMax = max(globalMax, m - cnt);
        //}

        unordered_map<int,int> freq;

        for(auto p : petals) freq[p]++;

        for(auto [key, val] : freq){
            int toFind = m;
            for(int i = 1 ; i <= val; i++){

                if(key*i > m) continue;
                if(key*i == m){globalMax = m ; continue;}

                int tempFind = toFind - key*i;
                if(freq.find(key+1) != freq.end()){
                    int newToFind = tempFind - tempFind%(key+1);
                    int valReqdForPlus1 = newToFind/(key+1);
                    if(valReqdForPlus1 <= freq[key+1]){
                        globalMax = max(globalMax, m - tempFind%(key+1));
                    }
                    else{
                        globalMax = max(globalMax, key*i + (key+1)*freq[key+1]);
                    }
                }else{
                    globalMax = max(globalMax, key*i);
                }
            }
        }

        cout << globalMax << endl;
    }
    return 0;
}