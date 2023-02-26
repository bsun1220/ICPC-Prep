#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#define ll                    long long int
using namespace std;

int main(){
    ll n; cin >> n;
    if (n % 2){
        ll k = ((n * n) + 1)/2; 
        ll m = ((n * n) - 1)/2; 

        if(m <= 0 || k <= 0){
            cout << -1 << endl;
        } else {
            cout << m <<  " " << k << endl;
        }
    } else {
        ll k = n * n / 4 + 1;
        ll m = k - 2;
        if(m <= 0 || k <= 0){
            cout << -1 << endl;
        } else {
            cout << m <<  " " << k << endl;
        }
    }
}