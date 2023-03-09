#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#define ll                    long long int
using namespace std;

bool in_circle(ll x, ll y, ll center, ll r){
    return (x - center) * (x - center) + y*y <= r * r;
}

int binary_search(pair<ll,ll>* target, int x, int n){

    int left = 0; 
    int right = n - 1;
    while (left <= right){
        int mid = (right + left)/2;
        if (target[mid].first < x){
            left = mid + 1;
        } else if (target[mid].first > x){
            right = mid - 1;
        } else {
            return mid; 
        }
    }
    return left - 1; 

}


int main(){
    int n; cin >> n;
    pair<ll, ll> target[n];
    pair<ll, ll> temp_ref [n];
    for(int i = 0; i < n; i++){
        ll val1; cin >> val1;
        ll val2; cin >> val2;
        target[i] = {val1, val2};
        temp_ref[i] = {val1, i};
    }
    sort(target, target + n);
    sort(temp_ref, temp_ref + n);

    int ref[n];
    for(int i = 0; i < n; i++){
        ref[i] = temp_ref[i].second;
    }

    int m; cin >> m;
    ll hit [m][2];
    for(int i = 0; i < m; i++){
        cin >> hit[i][0];
        cin >> hit[i][1];
    }
    int ans[n];
    for(int i = 0; i < n; i++){
        ans[i] = -1;
    }
    int total = 0;
    for(int i = 0; i < m; i++){
        int left_most = binary_search(target, hit[i][0], n);

        if (left_most >= 0 && in_circle(hit[i][0],hit[i][1], target[left_most].first, target[left_most].second) 
            && ans[ref[left_most]] == -1){
            ans[ref[left_most]] = i + 1;
            total++;
        }
        if (left_most < n - 1 && in_circle(hit[i][0],hit[i][1], target[left_most+1].first, target[left_most+1].second) 
            && ans[ref[left_most + 1]] == -1){
                ans[ref[left_most + 1]] = i + 1;
                total++;
        }
        /*
        if (left_most > 0 && in_circle(hit[i][0],hit[i][1], target[left_most-1].first, target[left_most-1].second) 
            && ans[ref[left_most - 1]] == -1){
                ans[ref[left_most - 1]] = i + 1;
                total++;
        }*/
    }
    cout << total << endl;
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    

}