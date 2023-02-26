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

ll bs(ll * list, ll target, ll n){
    ll left = 0; ll right = n - 1; 
    if (target >= list[right]){
        return right;
    }
    while(left < right){
        
        ll mid = (left + right)/2;
        ll val = list[mid];
        if(target > val){
            left = mid + 1; 
        } else if (target < val){
            right = mid - 1; 
        } else {
            return mid; 
        }
    }
    if (list[left] > target){
        return left - 1;
    }
    return left;

}

int main(){
    ll n; cin >> n;
    ll d; cin >> d;
    ll list [n];
    for(int i = 0; i < n; i++){
        cin >> list[i];
    }
    ll sum = 0; 
    for(ll i = 0; i < n - 1; i++){
        ll val = list[i] + d; 
        ll index = bs(list, val, n);
        ll dist = max(index - i, (ll)0); 
        sum += (dist * (dist - 1))/2;
    }
    cout << sum << endl;
}