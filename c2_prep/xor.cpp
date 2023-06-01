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


const int mx=100001;
vector<int> adj[mx];
int given[mx];
int goal[mx];
bool visited[mx];
vector<int>res;

void dfs(int u, int odd_lev, int even_lev){
    visited[u] = true;
    if ((given[u]^odd_lev) != goal[u]){
        res.push_back(u);
        odd_lev ^= 1;
    }
    for(int i = 0; i < adj[u].size(); i++){
        int v = adj[u][i];
        if(!visited[v]){
            dfs(v, even_lev, odd_lev);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, u, v;
    cin >> n;
    m = n - 1;
    while(m--){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int j = 1; j <= n; j++){
        cin >> given[j];
    }
    for(int j = 1; j <= n; j++){
        cin >> goal[j];
    }
    memset(visited,false,sizeof(visited));
    dfs(1, 0, 0);
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << endl;
    }

}