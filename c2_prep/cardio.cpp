#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <cstring>
#define ll                    long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int grid[n];
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }

    int maxSize = INT_MIN;
    int minSize = INT_MAX;

    //line number -> (index, up/down)
    map<int, vector<pair<int, int>>> arr;

    int prev = 0;
    int ind = 0;
    for(int i = 0; i < n; i++){
        int val = grid[i];
        int multiplier = i % 2 == 0 ? 1 : -1;

        int start = prev - multiplier;

        while(val--){
            start += multiplier;
            arr[start].push_back({ind, multiplier});
            maxSize = max(maxSize, start);
            minSize = min(minSize, start);
            ind ++;
        }
        prev = start; 
    }

    for(int i = maxSize; i >= minSize; i--){
        int prevSpace = -1;
        for(int j = 0; j < arr[i].size(); j++){
            int space = arr[i][j].first - prevSpace - 1; 
            while(space > 0){
                cout << " ";
                space --;
            }
            if (arr[i][j].second == 1){
                cout << "/";
            } else {
                cout << "\\";
            }
            prevSpace = arr[i][j].first;
        }
        cout << endl;
    }

}