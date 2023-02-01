#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

const int N = 10;
vector<int> graph[N];
vector<int> count_arr(N, 0);

int main(){
    return 1;
}

void dfs(int s, int e){
    //process node
    for(int a : graph[s]){
        if(a == e) continue;
        dfs(e, a);
    }
}

void subtree_count(int s, int e){
    count_arr[s] = 1;
    for (auto u : graph[s]){
        if (u == e) continue;
        subtree_count(e, u);
        count_arr[s] += count_arr[u];
    }
}