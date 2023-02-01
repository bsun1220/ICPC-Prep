#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long int
using namespace std;

ll choose2(ll n){
    return (n * (n - 1))/2;
}

int main(){
    int n; cin >> n;
    map<pair<ll,ll>, ll> m;
    map<ll, ll> x1; 
    map<ll, ll> x2; 
    while(n--){
        ll val1; cin >> val1; 
        ll val2; cin >> val2;
        pair<ll,ll> key = make_pair(val1, val2);
        m[key]++;
        x1[val1]++;
        x2[val2]++;
    }
    ll total = 0; 
    for(auto const&pair:x1){
        total += choose2(pair.second);
    }
    for(auto const&pair:x2){
        total += choose2(pair.second);
    }
    for(auto const&pair:m){
        total -= choose2(pair.second);
    }
    cout << total << endl;
}
