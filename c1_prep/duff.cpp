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


bool divides_squared(ll x){
    ll val = (ll)sqrt(x);
    while(val > 1){
        if (x % (val * val) == 0){
            return true; 
        }
        val--;
    }
    return false; 
}

int main(){
    ll n; cin >> n;

    ll n_root = (ll) sqrt(n);
    for(int i = 1; i <= n_root; i++){
        if (n % i != 0) continue; 
        ll other_root = n/i; 
        if (!divides_squared(other_root)){
            cout << other_root << endl;
            return 0; 
        }
    }
    for(int i = n_root; i >= 2; i--){
        if (n % i != 0) continue; 
        if (!divides_squared(i)){
            cout << i << endl;
            return 0; 
        }
    }
}