#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

const int N = 5;
vector<vector<int>> edge_list;

void kruskal();

int main(){
    cout << __cplusplus << "\n";
}

/*
void kruskal(){
    sort(edge_list.begin(), edge_list.end());
    set<int> nodes;
    for (int i = 0; i < edge_list.size(); i++){
        vector<int> list = edge_list[i];
        bool found1 = nodes.count(edge_list[1]);
        bool found2 = nodes.count(edge_list[2]);
        if(!found1 && ! found2){
            continue;
        }
    }
}*/