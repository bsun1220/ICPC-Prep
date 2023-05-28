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
    ll n, m, x, y, z, p;
    cin >> n >> m >> x >> y >> z >> p;

    ll grid [p][2];
    for(int i = 0; i < p; i++){
        cin >> grid[i][0] >> grid[i][1];
    }

    x = x % 4;
    y = y % 2;
    z = z % 4;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < p; j++){
            ll temp1 = grid[j][0];
            ll temp2 = grid[j][1];
            grid[j][0] = temp2;
            grid[j][1] = n + 1 - temp1;
            swap(n, m);

        }
    }
    if (y != 0){
        for(int i = 0; i < p; i++){
            grid[i][1] = m + 1 - grid[i][1];
        }
    }
    for(int i = 0; i < z; i++){
        for(int j = 0; j < p; j++){
            ll temp1 = grid[j][0];
            ll temp2 = grid[j][1];
            grid[j][0] = m + 1 - temp2;
            grid[j][1] = temp1;
            swap(n, m);
        }
    }

    for(int i = 0; i < p; i++){
        cout << grid[i][0] << " " << grid[i][1] << "\n";
    }

}