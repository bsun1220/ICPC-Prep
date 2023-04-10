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
    ll n, k;
    cin >> n >> k;
    int arr[n];
    int total = 0; 
    for(int i = 0; i < n; i++) cin >> arr[i];

    int improve[n];

    ll remain = 0; 

    for(int i = 0; i < n; i++){
        total += (arr[i]/10);
        improve[i] = 0;
        if (arr[i] == 100) continue; 

        int upper = ((arr[i]/10) + 1) * 10; 
        remain += (100 - upper);
        improve[i] = upper - arr[i];
    }

    sort(improve, improve + n);

    for(int i = 0; i < n; i++){
        if (improve[i] > k) break;
        if (improve[i] != 0) total ++; 
        k -= improve[i]; 
    }
    total += min(remain, k)/10;
    cout << total << endl;


}