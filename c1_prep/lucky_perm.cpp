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
    if(n % 2 == 0){
        cout << -1 << endl; 
        return 0; 
    }

    for(int i = 0; i < n; i++){
        cout << i << " ";
    }
    cout << endl; 

    for(int i = 0; i < n; i++){
        cout << (i + 1) % n << " ";
    }
    cout << endl; 

    for (int i = 0; i < n; i++){
        cout << (2 * i + 1) % n << " ";
    }
    cout << endl; 
}