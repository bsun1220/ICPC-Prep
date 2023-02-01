
#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

const int N = 10
map<int, set<int>> adj_list; 

int main(){
    return 1; 
}


void top_sorting(){
    vector<int> list(N);
    vector<bool> seen(N);
    stack<int> s; 
    s.push(0);
    while(!s.empty()){
        int val = s.top();
        s.pop();
    }
}