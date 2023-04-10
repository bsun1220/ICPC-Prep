#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <cstring>
#define ll                    long long int
using namespace std;

int main(){
    int n; cin >> n;
    int grid[n][2];
    set<pair<int, int>> vis;
    map<int, set<int>> graph_x1;
    map<int, set<int>> graph_x2;
    for(int i = 0; i < n; i++){
        cin >> grid[i][0];
        cin >> grid[i][1];
        graph_x1[grid[i][0]].insert(grid[i][1]);
        graph_x2[grid[i][1]].insert(grid[i][0]);
    }

    stack<pair<int, int>> freq_stack;

    int num_size = 0;
    for(int i = 0; i < n; i++){
        pair<int, int> pair_val = {grid[i][0], grid[i][1]};
        if(vis.count(pair_val)) continue;
        num_size ++;
        freq_stack.push(pair_val);
        vis.insert(pair_val);
        while(freq_stack.size() != 0){
            pair<int, int> new_pair = freq_stack.top();
            freq_stack.pop();
            for(int x2 : graph_x1[new_pair.first]){
                if (vis.count({new_pair.first, x2})) continue; 
                freq_stack.push({new_pair.first, x2});
                vis.insert({new_pair.first, x2});
            }
            for(int x1 : graph_x2[new_pair.second]){
                if (vis.count({x1, new_pair.second})) continue; 
                freq_stack.push({x1, new_pair.second});
                vis.insert({x1, new_pair.second});
            }
        }
        
    }

    cout << num_size - 1 << endl;

}