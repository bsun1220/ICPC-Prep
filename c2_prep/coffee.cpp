#include <set>
#include <iostream>
#include <vector>
#include <map>
#include <deque>
#include <stack>
#include <queue>
#define ll                    long long int
using namespace std;

int main (){
    int n, k, q;
    cin >> n >> k >> q;

    int length = 200002;
    int arr[length];

    fill(arr, arr+length, 0);
    for(int i = 0; i < n; i++){
        int li, ri;
        cin >> li >> ri;
        arr[li]++;
        arr[ri + 1]--;
    }

    for(int i = 1; i < length; i++){
        arr[i] += arr[i - 1];
    }

    for(int i = 0; i < length; i++){
        if (arr[i] >= k){
            arr[i] = 1;
        } else {
            arr[i] = 0;
        }
        if(i != 0) arr[i] += arr[i - 1];
    }

    for(int i = 0; i < q; i++){
        int li, ri;
        cin >> li >> ri;
        cout << arr[ri] - arr[li - 1] << endl;
    }


}