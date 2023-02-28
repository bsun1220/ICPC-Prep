#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;

int main(){
    int row; cin >> row;
    int col; cin >> col;

    map<int, int> m;
    m[1] = 1; 
    m[2] = 0;
    m[3] = 0;
    m[4] = 1; 
    m[5] = 0;
    m[6] = 1;
    m[7] = 0;
    m[8] = 3;
    m[9] = 2;
    m[0] = 2; 

    int row_arr[row];
    int col_arr[col];
    for(int i = 0; i < row; i++){
        row_arr[i] = 0;
    }

    for(int i = 0; i < col; i++){
        col_arr[i] = 0;
    }

    for(int i = 0; i < row; i++){

        for(int k = 0; k < col; k++){
            int val; cin >> val; 
            row_arr[i] += m[val];
            col_arr[k] += m[val];
        }
    }
    int min_val = INT_MAX;
    for(int i = 0; i < row; i++){
        min_val = min(min_val, row_arr[i]);
    }
    for(int i = 0; i < col; i++){
        min_val = min(min_val, col_arr[i]);
    }
    cout << min_val << endl;
}