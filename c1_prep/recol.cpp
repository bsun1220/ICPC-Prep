#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#define ll                    long long int
using namespace std;

int main(){
    int n; int m;
    cin >> n >> m;
    string grid[n];
    for(int i = 0; i < n; i++){
        cin >> grid[i];
    }
    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        if (grid[i] > grid[i + 1]){
            ans++;
            int k;
            for(int j = 0; j < m; j++){
                if(grid[i][j] > grid[i + 1][j]){
                    k = j;
                    break;
                }
            }
            for(int l = 0; l < n; l++){
                grid[l][k] = 'a';
            }
            i = -1;
        }
    }

    cout << ans << endl;
}