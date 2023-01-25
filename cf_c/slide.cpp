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

    ll q; cin >> q;
    while(q--){
        ll length; cin >> length;
        ll prev = -1; 
        ll total = 0; 
        for(ll i = 0; i < length; i++){
            ll val; cin >> val;
            if(val < prev){
                total += (prev - val);
            }
            prev = val; 
        }
        cout << total << endl; 
    }
}