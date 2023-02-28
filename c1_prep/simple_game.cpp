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
    ll m; cin >> m;

    if (m == 1 && n == 1){
        cout << 1 << endl;
    } else if (m == n){
        cout << m - 1 << endl;
    } else if (m == 1){
        cout << 2 << endl;
    } else if (abs(m - n) > m - 1){
        cout << m + 1 << endl; 
    } else {
        cout << m - 1 << endl;
    }

}