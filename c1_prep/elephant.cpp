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
    int n; cin >> n;
    ll arr[n];
    ll sorted_arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    copy(arr, arr + n, sorted_arr);
    sort(sorted_arr, sorted_arr + n);
    int num_diff = 0;
    for(int i = 0; i < n; i++){
        if (arr[i] != sorted_arr[i]) num_diff++;
    }

    if(num_diff == 0 || num_diff == 2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}