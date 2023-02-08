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

ll recurse(ll n){
    if (n == 1){
        return 2; 
    }
    return 3 * recurse(n - 1) + 2; 
}

int main(){
    ll n; cin >> n;
    ll m; cin >> m;
    ll ans = recurse(n) % m;
    cout << ans % m << endl;

}