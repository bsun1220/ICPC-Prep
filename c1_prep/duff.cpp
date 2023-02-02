#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;


bool divides_squared(ll x){
    ll ind = 2;
    while(ind * ind <= x){
        if (x % (ind * ind) == 0){
            return true; 
        }
        ind++; 
    }
    return false; 
}

int main(){
    ll n; cin >> n;
    ll iter = n;
    iter++;
    while(iter--){
        if (n % iter != 0){
            continue;
        }
        if(!divides_squared(iter)){
            cout << iter << endl;
            break;
        }
    }
}