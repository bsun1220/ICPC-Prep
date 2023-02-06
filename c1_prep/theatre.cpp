#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
#include <queue>
#define ll                    long long int
using namespace std;

ll choose( ll n, ll k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    ll result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int main(){
    ll n; cin >> n;
    ll m; cin >> m;
    ll t; cin >> t;

    ll total = choose(n + m, t);
    for(int i = 3; i >= 0; i--){
        if (n >= i && m >= t-i){
            total -= choose(n, i) * choose(m, t - i);
        } 
    }

    if(n >= t){
        total -= choose(n, t);
    }
    cout << total << endl;

}
