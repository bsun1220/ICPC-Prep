#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#define ll                    long long int
using namespace std;

int main(){
    int n; cin >> n;
    char grid [n];
    map<char, int> m;
    set<char> keys; 
    for(int i = 0; i < n; i++){
        cin >> grid[i];
        keys.insert(grid[i]);
    }

    if (keys.size() <= 2){
        cout << keys.size() << endl;
        return 0;
    }

    int left = 0, right = 1;
    int max_total = keys.size();
    keys.clear();
    keys.insert(grid[0]);
    keys.insert(grid[1]);
    m[grid[0]]++;
    m[grid[1]]++;

    int min_length = n;

    int curr_length = 1;

    while(left < n && right < n){
        if (keys.size() >= max_total){
            if(keys.size() == max_total) min_length = min(min_length, right - left + 1);
            m[grid[left]]--;
            if (m[grid[left]] == 0) keys.erase(grid[left]);
            left++;
        } 
        else if (right < n - 1){
            right++;
            m[grid[right]]++;
            if (m[grid[right]] == 1) keys.insert(grid[right]);
        }
        else {
            right++;
        }
    }

    cout << min_length << endl;
    
}