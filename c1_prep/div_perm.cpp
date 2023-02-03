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
    ll n; cin >> n;
    ll k; cin >> k;
    ll max_n = n;
    if (k % 2 == 0){
        cout << n << " ";
        max_n--; 
        k--;
    }
    k--;
    max_n -= k/2; 

    for(ll i = 1; i <= max_n; i++){
        cout << i << " ";
        if (i <= k/2){
            ll val = max_n + k/2 + 1 - i;
            cout << val << " ";
        }
    }
    cout << endl; 

}