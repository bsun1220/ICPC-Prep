#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;
const ll INF = (1e18);

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    ll dp[n + 1][k + 1][m + 1];
    ll c[n + 1];
    ll cost[n + 1][m + 1];

    for(int i = 1; i <= n; i++){
        cin >> c[i];
    }

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= k; j++){
            for(int a = 0; a <= m; a++){
                dp[i][j][a] = INF;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> cost[i][j];
        }
    }
}