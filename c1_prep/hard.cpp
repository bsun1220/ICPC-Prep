#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <cstring>
#include <queue>
#define ll                    long long int
#define inf 1000000000000000
using namespace std;

int main(){
    int n; cin >> n;
    ll cost[n];
    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }

    string ord_arr[n];
    string rev_arr[n];

    ll dp[n][2];

    for(int i = 0; i < n; i++){
        string val; cin >> val; 
        ord_arr[i] = val;
        rev_arr[i] = ord_arr[i];
        reverse(rev_arr[i].begin(), rev_arr[i].end());
        dp[i][0] = inf; dp[i][1] = inf;
    }

    dp[0][0] = 0;
    dp[0][1] = cost[0];

    for(int i = 1; i < n; i++){
        if (ord_arr[i] >= ord_arr[i - 1]){
            dp[i][0] = dp[i - 1][0];
        }
        if (ord_arr[i] >= rev_arr[i - 1]){
            dp[i][0] = min(dp[i][0], dp[i - 1][1]);
        }
        if(rev_arr[i] >= ord_arr[i - 1]){
            dp[i][1] = dp[i - 1][0] + cost[i];
        }
        if (rev_arr[i] >= rev_arr[i - 1]){
            dp[i][1] = min(dp[i][1], dp[i - 1][1] + cost[i]);
        }
    }
    ll ans = min(dp[n - 1][1], dp[n - 1][0]);
    if(ans == inf){
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }


}