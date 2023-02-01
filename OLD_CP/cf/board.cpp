#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        long long ans = 0;
        for(int k = 1; k <= n/2; k++){
            ans += k * 1ll * k;
        }
        cout << ans * 8 << endl;
    }
}