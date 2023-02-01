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
    int n; cin >> n; 
    bool is_even = true;
    ll total = 0; 
    bool found_zero = false; 
    while(n--){
        ll val; cin >> val;
        if(val == 0) found_zero = true; 
        bool closer_to_neg = abs(val + 1) < abs(val - 1);
        if (closer_to_neg){
            is_even = !is_even;
            total += abs(val + 1);
        } else {
            total += abs(val - 1);
        }
    }
    if (!is_even & !found_zero){
        total += 2;
    }
    cout << total << endl;
}