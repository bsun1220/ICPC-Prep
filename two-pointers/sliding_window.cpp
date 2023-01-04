#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <array>
using namespace std;

vector<int> sliding_window(vector<int> list, int k);

int main(){

}

vector<int> sliding_window(vector<int> list, int k){
    deque<int> dq;
    vector<int> sw;
    dq.push_back(list[0]);
    for(int i = 1; i < k; i++){
        while(dq.size() > 1 && list[i] < dq.back()){
            dq.pop_back();
        }
        dq.push_back(list[i]);
    }
    sw.push_back(dq.front());
    for(int i = k + 1; i < list.size(); i++){
        int value = list[i - k - 1];
        if (value == dq.front()){
            dq.pop_front();
        }

        while(dq.size() > 1 && list[i] < dq.back()){
            dq.pop_back();
        }
        dq.push_back(list[i]);
        sw.push_back(dq.front());
    }
    return sw;

}