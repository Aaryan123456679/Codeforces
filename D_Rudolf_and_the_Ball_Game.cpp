#include <bits/stdc++.h>
using namespace std;
// Your definitions here

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    set<int> players, temp;
    vector<int> answer;

    while(t--) {
        int n,m,x;
        cin >> n >> m >> x;

        players.clear();

        players.insert(x);

        for(int i = 0 ; i < m ; i++){
            int dist;
            cin >> dist;

            char dir;
            cin >> dir;
            
            temp.clear();

            for(int player : players){
                if(dir == '0'){
                    if(player + dist > n){
                        temp.insert( (player+dist)%n );
                    }else{
                        temp.insert( (player+dist));
                    }
                }else if(dir == '1'){
                    if(player - dist <= 0){
                        temp.insert((n - dist + player));
                    }else{
                        temp.insert(player-dist);
                    }
                }else{
                    if(player - dist <= 0){
                        temp.insert((n - dist + player));
                    }else{
                        temp.insert(player-dist);
                    }
                    if(player + dist > n){
                        temp.insert( (player+dist)%n );
                    }else{
                        temp.insert( (player+dist));
                    }
                }
            }
            players = temp;
        }

        answer.clear();
        for(auto player : players) answer.push_back(player);
        cout << players.size() << endl;
        for(int i = 0 ; i < answer.size(); i++){
            cout << answer[i];
            if(i != answer.size() -1) cout << ' ';
        }
        cout << endl;
    }
    return 0;
}