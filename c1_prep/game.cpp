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
    int n; cin >> n;
    int arr [n];
    int one_total = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == 1) one_total++;
    }
    if (one_total == n){
        for(int i = 0; i < n - 1; i++){
            cout << 1 << " ";
        }
        cout << 2 << endl;
    }
    else {
        sort(arr, arr + n);
        cout << 1 << " ";
        for(int i = 0; i < n - 1; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}