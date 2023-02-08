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
    int arr[n];
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        arr[i] = val; 
    }

    int start = -1; 
    for(int i = 0; i < n; i++){
        if (arr[i] == 1){
            start = i; 
            break;
        }
    }

    if (start == -1){
        cout << "NO" << endl;
        return 0;
    }

    for(int i = start; i < n; i++){
        
    }


}