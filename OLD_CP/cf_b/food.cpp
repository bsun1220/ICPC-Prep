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
        ll val; cin >> val;
        ll total = 0;
        while(val/10){
            int add = val/10;
            val = val - add * 10 + add; 
            total += add * 10; 
        }
        total += val; 
        cout << total << endl; 
    }

}