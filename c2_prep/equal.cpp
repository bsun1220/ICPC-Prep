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
    if (n == 1){
        cout << "YES" << endl;
        cout << "1 2" << endl;
        return 0;
    }
    if (n % 2 == 0){
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    int arr [2 * n + 1];
    for(int i = 1; i <= n; i++){
        if (i % 2 == 1){
            arr[i] = 2 * i - 1; 
            arr[i + n] = 2 * i;
        } else {
            arr[i] = 2 * i;
            arr[i + n] = 2 * i - 1;
        }

    }

    for(int i = 1; i <= 2 * n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;



}