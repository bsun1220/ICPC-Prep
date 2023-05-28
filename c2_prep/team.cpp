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
    ll n, m;
    cin >> n >> m;

    if (n - 1 > m || m > 2 *( n + 1) ){
        cout << -1 << endl;
        return 0;
    }
    if (m == n - 1){
        for(int i = 0; i < m + n; i++){
            if (i % 2 == 0){
                cout << 0;
            } else {
                cout << 1;
            }
        }
        cout << endl;
        return 0;
    } else if (m == n){
        for(int i = 0; i < m + n; i++){
            if (i % 2 == 0){
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << endl;
        return 0;
    }
    else if (m == 2 * (n + 1)){
        for(int i = 0; i < n; i++){
            cout << 110;
        }
        cout << 11 << endl;
        return 0;
    }
    for(int i = 0; i < m - n - 1; i++){
        cout << 110;
    }
    for(int i = m - n - 1; i < n; i++){
        cout << 10;
    }
    cout << 1 << endl;

}