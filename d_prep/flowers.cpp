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
    ll t, k;
    cin >> t >> k;
    ll grid [t][2];

    ll mod = 1000000007;

    ll cmax = 0;
    for(int i = 0 ; i < t; i++){    
        cin >> grid[i][0] >> grid[i][1];
        cmax = max(cmax, max(grid[i][0], grid[i][1]));
    }
    ll dp[cmax + 1];
    dp[0] = 0;
    for(int i = 1; i <= k - 1; i++){
        dp[i] = 1;
    }
    dp[k] = 2;
    for(int i = k + 1; i <= cmax; i++){
        dp[i] = dp[i - 1]%mod + dp[i - k]%mod;
    }
    for(int i = 1; i <= cmax; i++){
        dp[i] += dp[i - 1]%mod;
    }
    
    for(int i = 0; i < t; i++){
        ll val = (dp[grid[i][1]] - dp[grid[i][0] - 1])%mod;
        if (val < 0){
            val += mod;
        }
        cout << val << endl;
    }



}