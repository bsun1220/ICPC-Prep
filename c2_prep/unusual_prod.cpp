#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <string>
#include <math.h>
#define ll                    long long int
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    bool grid [n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    int q;
    cin >> q;

    vector<bool> res;

    while (q--){
        int choice;
        cin >> choice;
        if (choice == 3){
            bool total = 0;
            for(int i = 0; i < n; i++){
                total ^= grid[i][i];
            }
            res.push_back(total);
        } else {
            int i;
            cin >> i;
            grid[i - 1][i - 1] = !grid[i - 1][i - 1];
        }
    }

    for(int i = 0; i < res.size(); i++){
        printf("%d", (int)res[i]);
    }
    cout << endl;


}