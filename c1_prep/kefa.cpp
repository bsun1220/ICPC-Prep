#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;


void dfs(int& ans, int node, int num_cats, int max_cat, bool* has_cat, 
        map<int, set<int>>& graph, bool* visited){
            visited[node] = true;
            num_cats = (has_cat[node]) ? num_cats + 1 : 0;

            if (num_cats > max_cat){
                return;}

            if(graph[node].size() == 1 && node != 1){
                ans++;
                return;
            }

            for (int child : graph[node]){
                if (!visited[child]){
                    dfs(ans, child, num_cats, max_cat, has_cat, graph,visited);
                }
            }
}

void print_graph(map<int, set<int>>& graph){
    for (const auto&i : graph){
        cout << "key is " << i.first << endl;
        for(int s : graph[i.first]){
            cout << s << endl;
        }
    }
}

int main(){
    int n; cin >> n;
    int m; cin >> m;

    bool has_cat[n + 1];
    bool visited[n + 1];
    for(int i = 1; i <= n; i++){
        int val; cin >> val;
        has_cat[i] = (val == 1);
        visited[i] = false; 
    }

    map<int, set<int>> edge_list;
    for(int i = 0; i < n - 1; i++){
        int x; cin >> x; 
        int y; cin >> y;
        edge_list[x].insert(y);
        edge_list[y].insert(x);
    }

    int ans = 0;

    dfs(ans, 1, 0, m, has_cat, edge_list, visited);
    cout << ans << endl;
}