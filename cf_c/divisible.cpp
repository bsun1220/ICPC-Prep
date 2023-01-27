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
        if(n == 1){cout << 1 << endl; } 
        else { cout << k + (k - 1)/(n - 1) << endl;}
    }
}