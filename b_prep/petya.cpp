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
        cin >> arr[i];
    }

    int max_num = 0;

    for(int i = 0; i < n; i++){
        int curr_max = arr[i];
        int curr_attempt = 1; 
        int k = i - 1;
        while(k >= 0 && arr[k] <= curr_max){
            curr_max = arr[k];
            k--;
            curr_attempt++;
        }
        curr_max = arr[i];
        k = i + 1;
        while(k < n && arr[k] <= curr_max){
            curr_max = arr[k];
            k++;
            curr_attempt++;
        }
        max_num = max(curr_attempt, max_num);
    }

    cout << max_num << endl;
}