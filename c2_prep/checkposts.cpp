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

const int MOD = 1e9 + 7;

vector<vector<int>> adj(1e5 + 7), radj(1e5 + 7);
vector<bool> visited(1e5 + 7);
stack<int> s;
vector<int> cost(1e5 + 7);
map<int, int> countcost;

void dfs(int x, int& min_amount){
    if (visited[x]) return;

    min_amount = min(min_amount, cost[x]);
    countcost[cost[x]]++;
    visited[x] = true;
    for(auto child : radj[x]){
        if (visited[child]) continue;
        dfs(child, min_amount);
    }

}

void getOrder(int x){
    if (visited[x]) return;

    visited[x] = true; 

    for (auto child : adj[x]){
        if(!visited[child]) getOrder(child);
    }
    
    s.push(x);

}

int main(){
    int n;
    cin >> n;

    visited.assign(visited.size(), false);

    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        radj[y].push_back(x);
    }

    for(int i = 0; i < n; i++){
        if (visited[i]) continue;

        getOrder(i);
    }

    visited.assign(visited.size(), false);

    ll total_cost = 0;
    ll num_options = 1;
    while(!s.empty()){
        int node = s.top();
        s.pop();
        if (visited[node]) continue;

        int smallest_cost = INT_MAX;
        dfs(node, smallest_cost);

        total_cost += smallest_cost;
        num_options *= countcost[smallest_cost];
        countcost.clear();

    }

    cout << total_cost <<  " " << num_options % MOD << endl;




}