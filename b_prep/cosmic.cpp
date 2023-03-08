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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int m; cin >> m;
    int k; cin >> k;

    int grid [n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }
    int row_ref [n];
    int col_ref [m];
    for(int i = 0; i < n; i++){
        row_ref[i] = i;
    }
    for(int i = 0; i < m; i++){
        col_ref[i] = i;
    }
    for(int i = 0; i < k; i++){
        char val; cin >> val;
        int r1; cin >> r1;
        int r2; cin >> r2;
        r1--;
        r2--;
        if (val == 'g'){
            cout << grid[row_ref[r1]][col_ref[r2]] << "\n";
        } else if (val == 'c'){
            int temp = col_ref[r1];
            col_ref[r1] = col_ref[r2];
            col_ref[r2] = temp;
        } else if (val == 'r'){
            int temp = row_ref[r1];
            row_ref[r1] = row_ref[r2];
            row_ref[r2] = temp;
        }
    }
}