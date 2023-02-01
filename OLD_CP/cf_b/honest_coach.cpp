#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int n; 
    cin >> n;
    for(int test = 0; test < n; test++){
        int length;
        cin >> length;
        vector<int> list;
        for(int i = 0; i < length; i++){
            int val;
            cin >> val;
            list.push_back(val);
        }
        sort(list.begin(), list.end());
        int min_distance = INT_MAX;
        for(int i = 1; i < length; i++){
            min_distance = min(min_distance, list[i] - list[i - 1]);
        }
        cout << min_distance << endl;
    }
}