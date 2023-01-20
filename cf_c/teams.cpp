#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int t; 
    cin >> t; 
    for(int test = 0; test < t; test++){
        map<int, int> m;
        int max_num = 0;
        int length; 
        cin >> length;
        for(int i = 0; i < length; i++){
            int val; 
            cin >> val; 
            if (m.count(val) == 0) m[val] = 0; 
            m[val] += 1;

            max_num = max(max_num, m[val]);
        }

        int team1 = m.size();
        int team2 = max_num;

        if(team1 > team2){
            cout << team2 << endl;
        } else if (team2 > team1){
            cout << team1 << endl;
        } else {
            cout << team1 - 1 << endl;
        }

    }
}