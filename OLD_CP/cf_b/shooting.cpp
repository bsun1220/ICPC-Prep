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
    pair<int, int> arr [length];
    for(int i = 0; i < length; i++){
        int val; cin >> val; 
        arr[i] = make_pair(val * -1, i);
    }
    sort(arr, arr + length);
    ll total = 0;
    for(int i = 0; i < length; i++){
        total += (ll)(i * (arr[i].first * -1) + 1);
    }
    cout << total << endl; 
    for(int i = 0; i < length; i++){
        cout << arr[i].second + 1 << " ";
    }
    cout << endl;

}