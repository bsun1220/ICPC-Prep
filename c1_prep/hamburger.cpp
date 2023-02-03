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
    string order; cin >> order;
    map<string, int> count_m; 
    string orders[3] = {"B", "S", "C"};
    for(int i = 0; i < 3; i++){
        count_m[orders[i]] = count(order.begin(), order.end(), orders[i][0]);
    }

    map<string, int> amount_m;
    cin >> amount_m["B"]; cin >> amount_m["S"]; cin >> amount_m["C"];

    map<string, int> cost_m;
    cin >> cost_m["B"]; cin >> cost_m["S"]; cin >> cost_m["C"];
    ll money; cin >> money; 
    
    string max_order; 
    vector<pair<ll, string>> can_make; 
    for(int i = 0; i < 3; i++){
        string key = orders[i];
        if (count_m[key] == 0){
            can_make.push_back(make_pair(-1, key));
        } else {
            can_make.push_back(make_pair(amount_m[key]/cost_m[key], key));
        }
    }
    sort(can_make.begin(), can_make.end());
    ll total = 0;
    for(int i = 0; i < 3; i++){
        cout << can_make[i].first << " " << can_make[i].second << endl;
    }
    string key = can_make[0].second; 
    ll amount = can_make[0].first; 
    if (amount != -1){
        ll cost = cost_m[key];
        ll amount_diff = min(can_make[1].first - can_make[0].first, money/cost);
        total = amount + amount_diff;
        money -= cost * amount_diff; 
    }
    key = can_make[1].second; 
    amount = can_make[1].first;
    if(amount != -1){
        ll cost = cost_m[key];
        if (can_make[0].first != -1){
            cost += cost_m[can_make[0].second];
        }
        ll amount_diff = min(can_make[2].first - can_make[1].first, money/cost);
        total += amount + amount_diff;
        money -= cost * amount_diff; 
    }
    key = can_make[2].second;
    amount = can_make[2].first; 
    cost = cost_m[key];
    if (can_make[0].first != -1){
        cost += cost_m[can_make[0].second];
    }
    if (can_make[1].first != -1){
        cost += cost_m[can_make[1].second];
    }
    total += 


    cout << total << endl; 


}