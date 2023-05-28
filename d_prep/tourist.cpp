#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;

ll gcd(ll a, ll b){
    if (b == 0){
        return a;
    }
    return gcd(a, a%b);
}

int main(){
    int n; cin >> n;

    ll arr[n];
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum1 += arr[i];
    }

    sort(arr, arr + n);
    ll sumBefore = 0;
    for(int i = 0; i < n; i++){
        sum2 += i * arr[i] - sumBefore;
        sumBefore += arr[i];
    }
    ll total = sum1 + 2 * sum2;
    ll lcm = gcd(total, n);

    cout << total/lcm << " " << n/lcm << endl;
}