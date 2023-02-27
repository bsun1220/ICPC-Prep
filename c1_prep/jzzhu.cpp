#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <cstring>
#define ll                    long long int
using namespace std;

int main(){
    ll val1; cin >> val1;
    ll val2; cin >> val2;
    ll n; cin >> n;
    ll ans = 0;
    if(n % 6 == 0){
        ans = (-1 * val2 + val1) % 1000000007;
    } else if (n%6==5){
        ans = (-1 * val2) % 1000000007;
    } else if (n%6==4){
        ans = (-1 * val1) % 1000000007;
    } else if (n%6==3){
        ans = (val2 - val1) % 1000000007;
    } else if (n%6==2){
        ans = (val2) % 1000000007;
    } else {
        ans = val1 %1000000007;
    }

    if (ans < 0) {
        ans += 1000000007;
    }
    cout << ans << endl;
}