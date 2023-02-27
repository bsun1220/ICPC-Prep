#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <cstring>
#define ll                    long long int
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    ll cum[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (i == 0){cum[i] = arr[i];}
        else {cum[i] = arr[i] + cum[i - 1];}
    }
    char m[n];
    for(int i = 0; i < n; i++){
        cin >> m[i];
    }
    
    ll rev_cum[n];
    rev_cum[n - 1] = m[n-1] == '1' ? arr[n -1] : 0;
    for(int i = n - 2; i >= 0; i--){
        rev_cum[i] = m[i] == '1' ? rev_cum[i + 1] + arr[i] : rev_cum[i + 1];
    }

    ll max_value = rev_cum[0];

    for(int i = n - 1; i >= 1; i--){
        if (m[i] == '0') continue; 
        ll first_sum = cum[i - 1];
        ll second_sum = i == n - 1 ? 0 : rev_cum[i + 1];
        max_value = max(max_value, first_sum + second_sum);
    }
    cout << max_value << endl;
}