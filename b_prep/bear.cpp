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
    int a; cin >> a;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int index = 1; 
    int curr = a - 1; 
    int num_criminals = arr[curr] == 1 ? 1 : 0; 
    while(curr - index >= 0 && curr + index < n){
        if (arr[curr-index] == 1 && arr[curr+index] == 1){
            num_criminals += 2;
        }
        index++; 
    }
    while(curr  - index >= 0){
        num_criminals = arr[curr-index] == 1 ? num_criminals + 1 : num_criminals;
        index++; 
    }
    while(curr + index < n){
        num_criminals = arr[curr+index] == 1 ? num_criminals + 1 : num_criminals;
        index++; 
    }

    cout << num_criminals << endl;
}