#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <cstring>
#include <tuple>
#define ll                    long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<pair<ll, ll>> tables;
    vector<tuple<ll, ll, ll>> orders;

    for(int i = 0; i < n; i++){
        ll c, p;
        cin >> c >> p;
        orders.push_back(make_tuple(c, p, i + 1));
    }
    sort(orders.begin(), orders.end());

    int k;
    cin >> k;
    for(int i = 1; i <= k; i++){
        ll r; 
        cin >> r;
        tables.push_back({r, i});
    }
    sort(tables.begin(), tables.end());

    ll total = 0;
    vector<pair<ll, ll>> ans;

    for(int i = 0; i < tables.size(); i++){
        pair<ll, ll> table = tables[i];
        ll table_size = table.first;

        ll rightPointer = 0;
        ll maxPriceSize = -1;
        ll index = -1;
        while (rightPointer < orders.size() && get<0>(orders[rightPointer]) <= table_size){
            if (get<1>(orders[rightPointer]) > maxPriceSize){
                index = rightPointer;
                maxPriceSize = get<1>(orders[rightPointer]);
            }
            rightPointer ++;
        }

        if (index == -1) continue;

        ans.push_back({get<2>(orders[index]), tables[i].second});
        total += get<1>(orders[index]);
        orders.erase(orders.begin() + index);
    }

    cout << ans.size() << " " << total << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }



}