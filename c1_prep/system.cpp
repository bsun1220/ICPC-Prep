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
    ll n, m, v; 
    cin >> n >> m >> v;
    if (((n - 1) * (n - 2))/2  + 1< m){
        cout << -1 << endl;
        return 0;
    } else if (m < n - 1){
        cout << -1 << endl;
        return 0;
    }
    ll arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i + 1; 
    }

    swap(arr[1], arr[v - 1]);
    
    if (v == 2) swap(arr[2], arr[1]);
    cout << arr[0] << " " << arr[1] << " ";
    m--;

    for(int i = 1; i <= n - 2; i++){
        for (int k = 1; k + i < n; k++){
            if (m == 0) break;
            cout << arr[k] << " " << arr[k + i] << " ";
            m--;
        }
    }
}