#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;


int main(){
    set<int> s;
    int n = 100;
    for (int i = 0; i < n; i++){
        s.insert(i);
    }


}

void search1(vector<int> permutations, int n, vector<bool> chosen){
    if (permutations.size() == 0){
        // process permutation
    }
    else{
        for (int i = 0; i < n; i++){
            if (chosen[i]) continue;
            chosen[i] = true;
            permutations.push_back(i);
            search1(permutations, n, chosen);
            chosen[i] = false;
            permutations.pop_back();
        }
    }
}

