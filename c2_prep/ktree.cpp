#include <bits/stdc++.h>
#include <iostream>
#define ll                    long long int
using namespace std;

int main(){
    int n, k, d;
    cin >> n >> k >> d;

    ll mod = 1000000007;

    ll f[n + 1][2];

    f[0][0] = 1;
    f[0][1] = 0;

    for(int i = 1; i <= n; i++){
        f[i][0] = 0;
        f[i][1] = 0;
        for(int j = 1; j <= k; j++){
            if (i - j < 0){
                break;
            }
            else if (j < d){
                f[i][0] += f[i - j][0]%mod;
                f[i][1] += f[i - j][1]%mod;
            } else {
                f[i][1] += f[i - j][1]%mod;
                f[i][1] += f[i - j][0]%mod;
            }
        }
    }
    cout << f[n][1]%mod<< endl;


}