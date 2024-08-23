#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<long long>
#define vvl vector<vector<long long>>
#define pb push_back
#define mp make_pair
#define F first 
#define unmp unordered_map<int,int>
#define S second 
#define all(x) x.begin(),x.end()
#define sortasc(x) sort(all(x))
#define sortdes(x) sort(x.rbegin(),x.rend())
#define PI 3.1415926535897932384626
const int mod = 1000000007;

void solve(vi &arr, vi &temp, vector<string> &vs){
    int n;
    cin >> n;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    vs.resize(m);
    for(int i=0;i<m;i++){
        string s;
        cin >> s;
        vs[i] =s;
    }
    for(int i=0;i<m;i++){
        temp.resize(26,INT_MAX);
        string s = vs[i];
        if(arr.size()!=s.size()){
            cout << "NO" << endl;
            continue;
        }
        bool found = false;
        for(int j=0;j<s.size();j++){
            if(temp[s[j]-'a']==INT_MAX){
                temp[s[j]-'a'] = arr[j];
            } else {
                if(temp[s[j]-'a']!=arr[j]){
                    found = true;
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if(!found){
            cout << "YES" << endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vi arr, temp;
    vector<string>  vs;

    int t;
    cin >> t;
    while(t--){
        solve(arr, temp , vs);
    }
    return 0;
}