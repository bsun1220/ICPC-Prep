#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
#include <queue>
#define ll                    long long int
using namespace std;

int main(){
    ll n; cin >> n;
    ll k; cin >> k;
    pair<int, int> arr[n];

    for(int i = 0; i < n; i++){
        int val; cin >> val; 
        arr[i] = make_pair(val, i);

    }
    sort(arr, arr + n);

    vector<pair<int, int>> actions; 
    int start = 0; int end = n - 1;
    int m = 0; 

    int min_val = arr[0].first;
    int max_val = arr[n - 1].first; 

    while(m < k){
        if (max_val - min_val <= 1){
            break; 
        }
        if (start >= end){
            start = 0; 
            end = n - 1; 
        }
        else if (arr[start] == arr[start + 1]){
            start++; 
        }
        else if (arr[end] == arr[end - 1]){
            end--; 
        }

    }

}
