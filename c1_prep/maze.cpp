#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <stack>
#include <algorithm>
#define ll                    long long int
using namespace std;

bool inbounds(int vert, int hor, int n, int m){
    return (vert >= 0 && hor >= 0 && vert < n && hor < m);
}

int main(){
    int n; cin >> n;
    int m; cin >> m;
    int k; cin >> k;
    char grid[n][m];
    int start = -1;
    int s = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if (grid[i][j] == '.'){
                start = i * m + j;
                s++;
            }
        }
    }
    bool v[n * m];
    for(int i = 0; i < n * m; i++){
        v[i] = false; 
    }

    queue<int>q;
    v[start] = true;
    q.push(start);
    int iter = (s - k);

    int direct[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};

    set <int> allowed;

    while(iter--){
        int val = q.front();
        allowed.insert(val);
        if(iter == 0) break;
        int old_vert = floor(val/m);
        int old_hor = val % m;
        q.pop();
        for (int i = 0; i < 4; i++){
            int vert = old_vert + direct[i][0];
            int hor = old_hor + direct[i][1];
            int new_point = vert * m + hor;
            if(inbounds(vert, hor, n, m) && !v[new_point] && grid[vert][hor] == '.'){
                v[new_point] = true;
                q.push(new_point);
            }
        }
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '#'){
                cout << "#";
            } else if (allowed.count(i * m + j) == 1){
                cout << ".";
            } else {
                cout << "X";
            }
        }
        cout << endl;
    }

}