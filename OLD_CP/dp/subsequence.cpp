#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <array>
using namespace std;

int subsequence(vector<int> v);

int main(){
    vector<int> v({6,2,5,1,7,4,8,3});
    cout << subsequence(v) << "\n";
}

int subsequence(vector<int> v){
    vector<int>length(v.size());
    for (int i = 0; i < v.size(); i++){
        length[i] = 1;
        for(int j = 0; j < i; j++){
            if(v[j] >= v[i]) continue;
            length[i] = max(length[j] + 1, length[i]);
        }
    }
    return *max_element(length.begin(), length.end());
}