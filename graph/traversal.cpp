#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

void dfs(int s);
void bfs(int s);

const int N = 5;
vector<int> graph[N];
bool visited[N];

int main(){
    graph[0] = {1, 3};
    graph[1] = {0, 4, 2};
    graph[2] = {1, 4};
    graph[3] = {0};
    graph[4] = {1, 2};
    dfs(0);
    for (int i = 0; i < N; i++){
        visited[i] = false;
    }
    cout << "--------\n";
    bfs(0);

}

void dfs(int s){
    if (visited[s]) return;
    visited[s] = true;
    cout << s << "\n";
    for (auto u : graph[s]){
        dfs(u);
    }
}

void bfs(int s){
    queue<int> q; 
    visited[s] = true;
    q.push(s);
    while(!q.empty()){
        int val = q.front();
        cout << val << "\n";
        q.pop();
        for (auto u : graph[val]){
            if (visited[u]) continue;
            visited[u] = true;
            q.push(u);
        }
    }
}