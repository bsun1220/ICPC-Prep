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

int main(){
    int n; cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll min_val = *min_element(arr, arr + n);

    ll max_sub = 0;
    ll curr_sub = 0; 

    for(int i = 0; i < n; i++){
        if (arr[i] == min_val){
            max_sub = max(max_sub, curr_sub);
            curr_sub = 0;
        } else {
            curr_sub++;
        }
    }
    for(int i = 0; i < n; i++){
        if (curr_sub == 0 || arr[i] == min_val){
            max_sub = max(max_sub, curr_sub);
            break; 
        }
        curr_sub++;
    }
    cout << n * min_val +max_sub << endl;
}