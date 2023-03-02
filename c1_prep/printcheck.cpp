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
    int m; cin >> m;
    int k; cin >> k;

    pair<int,int> row[n];
    pair<int,int> col[m];
    for(int i = 0; i < n; i++){
        row[i] = make_pair(0, -1);
    }
    for(int i = 0; i < m; i++){
        col[i] = make_pair(0, -1);
    }
    for(int i = 0; i < k; i++){
        int c; cin >> c;
        if(c == 1){
            int row_val; cin >> row_val;
            int a; cin >> a;
            row[row_val - 1] = make_pair(a, i);

        } else if (c == 2){
            int col_val; cin >> col_val;
            int a; cin >> a;
            col[col_val - 1] = make_pair(a, i);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(col[j].second > row[i].second){
                cout << col[j].first << " ";
            } else {
                cout << row[i].first << " ";
            }
        }
    }
    cout << endl;
}