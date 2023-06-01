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

    int n, k;
    cin >> n >> k;

    ll arr [n];
    int ans = INT32_MIN;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int l = 0; l < n; l++){
        for(int r = l; r < n; r++){
            vector<int> b, c;

            int sum = 0;
            for(int i = l; i <= r; i++){
                b.push_back(arr[i]);
                sum += arr[i];
            }
            for(int i = 0; i < l; i++){
                c.push_back(arr[i]);
            }
            for(int i = r + 1; i < n; i++){
                c.push_back(arr[i]);
            }

            sort(b.begin(), b.end());
            sort(c.begin(), c.end());

            for(int i = 0; i < min(k, (int)min(b.size(), c.size())); i++){
                if (c[c.size() - 1 - i] <= b[i]) break;
                sum = sum - b[i] +c[c.size()-1-i];
            }
            ans = max(ans, sum);

        }
    }

    cout << ans << endl;

}