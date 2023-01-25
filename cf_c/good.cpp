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
    while (q--){
        ll length; cin >> length; 
        ll v[length];
        for(ll i = 0; i < length; i++){
            ll val; cin >> val; 
            v[i] = val;
        }
        ll start_index = length - 1; 
        while(start_index > 0 && v[start_index] <= v[start_index - 1]){
            start_index--; 
        }
        while(start_index > 0 && v[start_index] >= v[start_index - 1]){
            start_index--; 
        }
        cout << start_index << endl; 


    }
}