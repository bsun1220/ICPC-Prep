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
    int q; cin >> q; 
    while(q--){
        ll n; cin >> n; ll k; cin >> k;
        ll ans = ((ll)(n/k)) * k + min(n % k, (ll)(k/2));
        cout << ans << endl;
    }
}