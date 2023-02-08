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

ll power(ll x, ll y)
{
    ll temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

int main(){
    ll n; cin >> n;
    ll m; cin >> m;
    ll ans = (power(3, n) - 1) % m;
    if (ans < 0){
        ans += m;
    }
    cout << ans % m << endl;

}