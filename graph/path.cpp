#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;


//finds shortest path from start to everywhere else - use edge list
int* bellman_ford(int s);

//finds shortest path from start to everywhere else - use adjacency list
int* dijkstra(int s);

//finds shortest path for every node - use adjacency matrix
void floyd_marshall();

const int N = 5;
vector<pair<int, int>> adj[N];
vector<vector<int>> edge_list;
vector<bool> processed;
vector<vector<int>> adj_mat;

int main(){

}

int* bellman_ford(int s){
    int distance[N];
    for (int i = 0; i < N; i++) distance[N] = INT_MAX;
    distance[s] = 0;
    for(int i = 0; i < N; i++){
        for(auto e : edge_list){
            int a = e[0];
            int b = e[1];
            int w = e[2];
            distance[b] = min(distance[b], distance[a] + w);
        }
    }
    return distance;
}

int* dijkstra(int s){
    int distance[N];
    for(int i = 0; i < N; i++) distance[i] = INT_MAX / 2;
    distance[s] = 0;
    priority_queue<pair<int, int>> q;
    q.push({0, s});
    while(!q.empty()){
        int a = q.top().second;
        q.pop();
        if(processed[a]) continue;
        processed[a] = true;
        for (pair<int, int> u : adj[a]){
            int b = u.first, w = u.second;
            if(distance[a] + w < b){
                distance[b] = distance[a] + w;
                q.push({-distance[b], b});
            }
        }

    }

}

void floyd_marshall(){
    int distance[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (i == j) distance[i][j] = 0;
            else if (adj_mat[i][j]) distance[i][j] = adj_mat[i][j];
            else distance[i][j] = INT_MAX / 2;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                distance[i][j] = min(distance[i][j],
                    distance[i][k] + distance[k][j]
                );
            }
        }
    }
}

