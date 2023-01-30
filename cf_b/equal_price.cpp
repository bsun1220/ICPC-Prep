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
        int n; cin >> n;
        ll k; cin >> k;
        ll min_element = 100000001;
        ll max_element = -1; 

        while(n--){
            ll val; cin >> val; 
            min_element = min(val, min_element);
            max_element = max(val, max_element);
        }
        if ((max_element - min_element + 1)/2 > k){
            cout << -1 << endl;
        } else {
            cout << min_element + k << endl;
        }
    }
}