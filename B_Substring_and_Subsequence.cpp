#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include <map>
#include <set>
using namespace std;

int getLongest(const string a,const  string b,const  int n , const int m){
    int answer = m + n;
    for(int start = 0; start  < m; start++){
        int pt = start;
        for(int i = 0; i < a.size(); i++){
            if(pt < m && a[i] == b[pt]) pt++;
        }

        answer = min(answer, n + m - pt + start);
    }

    return answer;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        string b;
        cin >> b;

        int n = a.size();
        int m = b.size();

        int lenOfLCS = getLongest(a,b, n ,m );

        cout << lenOfLCS << endl;

    }

    return 0;
}