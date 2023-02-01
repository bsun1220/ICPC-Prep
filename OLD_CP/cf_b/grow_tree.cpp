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
    int length; cin >> length;
    int arr[length];
    for(int i = 0; i < length; i++){
        int val; cin >> val;
        arr[i] = val; 
    }
    sort(arr, arr + length);
    int mid = length/2; 
    ll m1 = 0, m2 = 0;
    for(int i = 0; i < mid; i++){
        m1 += arr[i];
    }
    for(int i = mid; i < length; i++){
        m2 += arr[i];
    }
    ll ans = (ll)m1*m1 + (ll)m2*m2;
    cout << ans << endl;
}