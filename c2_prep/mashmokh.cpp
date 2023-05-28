#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <cstring>
#define ll                    long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, k;
    cin >> n >> k;

    if (k < (ll)n/2){
        cout << -1 << endl;
        return 0;
    }
    
    bool odd = n%2 == 1;

    if (odd) n -= 1;

    ll firstElement = k - (n - 2)/2;
    ll secondElement = firstElement * 10;

    cout << firstElement << " " << secondElement << " ";

    for(int i = 1; i <= n - 2; i++){
        cout << i + 10000 << " ";
    }

    if (odd) cout << 999999;
    cout << endl;

}