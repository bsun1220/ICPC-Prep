#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;

ll get_price(ll x, ll pb, ll ps, ll pc, ll nb, ll ns, ll nc, ll cb, ll cs, ll cc){

    ll b_cost = pb * max(x * cb - nb, (ll)0);
    ll s_cost = ps * max(x * cs - ns, (ll)0);
    ll c_cost = pc * max(x * cc - nc, (ll)0);
    return b_cost + s_cost + c_cost; 
}

int main(){

    string s; cin >> s; 

    int cb = 0, cs = 0, cc = 0;
    for (char& ch : s){
        if (ch == 'B') {cb ++;}
        else if (ch == 'S') {cs++;}
        else {cc++;}
    }

    int nb, ns, nc;
    cin >> nb >> ns >> nc;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;

    ll r; cin >> r;

    ll left = 0, right = 100000000000000;
    ll ans = -1;
    while (left <= right){
        ll mid = (left + right)/2;
        ll price = get_price(mid, pb, ps, pc, nb, ns, nc, cb, cs, cc);

        if (price > r){
            right = mid - 1;
        } else if (price < r){
            left = mid + 1;
            ans = mid;
        } else {
            cout << mid << endl;
            return 0;
        }
    }
    cout << ans << endl;


}